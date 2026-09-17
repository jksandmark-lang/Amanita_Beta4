#!/usr/bin/env python3
"""Build a signed VST3 test variant without changing the production sources."""

import argparse
from pathlib import Path
import re
import shutil
import subprocess
import sys


def replace_once(path, old, new):
    content = path.read_text()
    if content.count(old) != 1:
        raise RuntimeError(f"Expected exactly one {old!r} in {path}")
    path.write_text(content.replace(old, new))


def build_test_plugin(install):
    root = Path(__file__).resolve().parents[1]
    output = root / "build" / "macos-test"
    source = output / "plugin"
    if source.exists():
        shutil.rmtree(source)
    shutil.copytree(root / "plugin", source)

    info = source / "source" / "DistrhoPluginInfo.h"
    dsp = source / "source" / "HeavyDPF_AmanitaV04.hpp"
    replace_once(info, '"AmanitaV04"', '"AmanitaMacTest"')
    replace_once(info, '"urn:hvcc:Amanita"', '"urn:hvcc:AmanitaMacTest"')
    replace_once(info, '"urn.hvcc.Amanita"', '"urn.hvcc.AmanitaMacTest"')
    replace_once(dsp, '"AmanitaV04"', '"AmanitaMacTest"')
    unique_id = re.search(r"return int64_t\(\s*(0x[0-9A-Fa-f]+)\s*\);", dsp.read_text())
    if unique_id is None:
        raise RuntimeError("Cannot locate the production plugin ID")
    production_id = unique_id.group(1)
    replace_once(dsp, production_id, f"0x{(int(production_id, 16) + 1) & 0xFFFFFFFF:08X}")

    makefile = source / "source" / "Makefile"
    makefile.write_text(makefile.read_text().replace("../../dpf", "../../../../dpf"))
    subprocess.run([
        "make", "-j4", "vst3", "NAME=AmanitaMacTest",
        "DPF_BUILD_DIR=../../objects", "DPF_TARGET_DIR=../../bin",
    ], cwd=source / "source", check=True)
    bundle = output / "bin" / "AmanitaMacTest.vst3"
    subprocess.run(["codesign", "--force", "--sign", "-", str(bundle)], check=True)
    subprocess.run(["codesign", "--verify", "--deep", "--strict", str(bundle)], check=True)

    if install:
        destination = Path.home() / "Library/Audio/Plug-Ins/VST3" / bundle.name
        destination.parent.mkdir(parents=True, exist_ok=True)
        if destination.exists():
            shutil.rmtree(destination)
        shutil.copytree(bundle, destination)
        print(f"Installed: {destination}")
    print(f"Built: {bundle}")


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--install", action="store_true", help="Install AmanitaMacTest in your user VST3 folder")
    args = parser.parse_args()
    if sys.platform != "darwin":
        parser.error("This script requires macOS and Xcode command-line tools")
    build_test_plugin(args.install)


if __name__ == "__main__":
    main()
