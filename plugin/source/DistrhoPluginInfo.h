/** SporePrintDSP */

#pragma once

#define DISTRHO_PLUGIN_NAME                 "AmanitaV04"
#define DISTRHO_PLUGIN_URI                  "urn:hvcc:Amanita"
#define DISTRHO_PLUGIN_BRAND                "SporePrintDSP"
#define DISTRHO_PLUGIN_BRAND_ID             SpPr
#define DISTRHO_PLUGIN_UNIQUE_ID            Aman

#define DISTRHO_PLUGIN_CLAP_ID              "urn.hvcc.Amanita"
#define DISTRHO_PLUGIN_NUM_INPUTS           2
#define DISTRHO_PLUGIN_NUM_OUTPUTS          2
#define DISTRHO_PLUGIN_IS_SYNTH             0
#define DISTRHO_PLUGIN_HAS_UI               1
#define DISTRHO_PLUGIN_IS_RT_SAFE           1
#define DISTRHO_PLUGIN_WANT_PROGRAMS        0
#define DISTRHO_PLUGIN_WANT_STATE           0
#define DISTRHO_PLUGIN_WANT_TIMEPOS         1
#define DISTRHO_PLUGIN_WANT_FULL_STATE      0
#define DISTRHO_PLUGIN_WANT_MIDI_INPUT      0
#define DISTRHO_PLUGIN_WANT_MIDI_OUTPUT     0

// for level monitoring
#define DISTRHO_PLUGIN_WANT_DIRECT_ACCESS   0


// if you are using a UI you'll probably want to modify these settings to your needs
#define DISTRHO_UI_USE_OPENGL               1
#define DISTRHO_UI_DEFAULT_WIDTH            600
#define DISTRHO_UI_DEFAULT_HEIGHT           700