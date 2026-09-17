# macOS UI testing

On September 17, 2026, commit `196bc8c` was built locally on an Apple M4 Pro
running macOS 26.5.1 and tested as a VST3 in Ableton Live 12.4.1.
The installed `/Library/Audio/Plug-Ins/VST3/AmanitaV04.vst3` binary was dated
September 16, before the repository's Retina sizing fix.

The current source renders the complete UI correctly at a Retina scale factor
of 2: a 600 × 700 logical layout in a 1200 × 1400 pixel framebuffer. The
background, knobs, switches, sliders, and numeric labels line up.
See [the hosted editor capture](macos-ui-retina.png).

The capture came from DGL's framebuffer export inside a temporary VST3 build
loaded by Ableton. The capture hook has been removed. Test builds use a separate
name and plugin ID so they can coexist with the production plugin. Visual
rendering and host loading were verified; audio quality, parameter automation,
window resizing, Intel Macs, and Windows/Linux behavior were not tested.

## Rebuild the Mac test plugin

From the repository root, with Python 3 and Xcode command-line tools installed:

```sh
python3 scripts/build-macos-test.py --install
```

This copies the plugin sources into `build/macos-test/plugin`, builds
`AmanitaMacTest.vst3`, applies a local development signature, and installs it in
`~/Library/Audio/Plug-Ins/VST3/`. It leaves the production sources and installed
`AmanitaV04` untouched. Omit `--install` to only build the test bundle.
The build targets the architecture of the local Mac.

In Ableton, use Settings → Plug-Ins → Rescan Plug-Ins, then search for
`AmanitaMacTest`. Use it on a test track. Close Ableton before rebuilding an
installed test version, since a host may retain a previously loaded library.
If the editor breaks, record the host version, display scaling, plugin build,
and a screenshot before changing window size.

## Build the production identity

```sh
make -j4
codesign --force --sign - bin/AmanitaV04.vst3
codesign --verify --deep --strict bin/AmanitaV04.vst3
```

The Makefile and TTL script now quote paths used during generation so `make`
succeeds from directories containing spaces. A local development signature is
needed for these builds to load in Ableton; it is not a distribution signature.

The existing UI fix passes `false` as `resizeNowIfAutoScaling` to
`setGeometryConstraints`. DPF already creates the window at the desktop scale
factor; scaling its dimensions a second time makes the Retina window too large.
No additional UI implementation change was needed for the tested configuration.
