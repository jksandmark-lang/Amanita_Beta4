NAME = AmanitaV04
FILES_DSP = $(filter-out HeavyDPF_AmanitaV04_UI.cpp, $(wildcard *.cpp))
FILES_DSP += $(wildcard *.c)
FILES_UI = HeavyDPF_AmanitaV04_UI.cpp
FILES_UI += ../dep/pngKnob.cpp
FILES_UI += ../dep/DelayKnob.cpp
FILES_UI += ../dep/ThreeWaySwitch.cpp
FILES_UI += ../dep/TwoWaySwitch.cpp
FILES_UI += ../resources/Artwork.cpp
FILES_UI += ../resources/Jura.cpp

DPF_TARGET_DIR = ../../bin
DPF_BUILD_DIR = ../../build
DPF_PATH = ../../dpf

DGL_OPENGL = true

include ../../dpf/Makefile.plugins.mk
BUILD_CXX_FLAGS += -I ../dep
BUILD_CXX_FLAGS += -I ../../dpf-widgets/generic
BUILD_CXX_FLAGS += -I ../../dpf-widgets/opengl

BUILD_C_FLAGS += -Wno-unused-parameter -std=c11 -fno-strict-aliasing -pthread
BUILD_CXX_FLAGS += -Wno-unused-parameter -fno-strict-aliasing -pthread
LINK_FLAGS += -pthread

ifeq ($(WINDOWS),true)
	BUILD_CFLAGS += -Wa,-mbig-obj
	BUILD_CXX_FLAGS += -Wa,-mbig-obj
endif


TARGETS += vst3


all: $(TARGETS)