/** SporePrintDSP */

#ifndef _HEAVY_AMANITAV04_H_
#define _HEAVY_AMANITAV04_H_

#include "HvHeavy.h"

#ifdef __cplusplus
extern "C" {
#endif

#if HV_APPLE
#pragma mark - Heavy Context
#endif

typedef enum {
  HV_AMANITAV04_PARAM_IN_BITRATE = 0x6CA32231, // Bitrate
  HV_AMANITAV04_PARAM_IN_DEL_LEFT = 0x50848907, // Del_Left
  HV_AMANITAV04_PARAM_IN_DEL_RIGHT = 0x6EB8DB6, // Del_Right
  HV_AMANITAV04_PARAM_IN_FEEDBACK = 0x57157946, // Feedback
  HV_AMANITAV04_PARAM_IN_FEEL_LEFT = 0xBCF6D724, // Feel_Left
  HV_AMANITAV04_PARAM_IN_FEEL_RIGHT = 0xB9290266, // Feel_Right
  HV_AMANITAV04_PARAM_IN_HIPASS_FREQ = 0x31E34622, // Hipass_Freq
  HV_AMANITAV04_PARAM_IN_HIPASS_RES = 0x415BC573, // Hipass_Res
  HV_AMANITAV04_PARAM_IN_LFO_AMOUNT = 0xD5F085A8, // Lfo_Amount
  HV_AMANITAV04_PARAM_IN_LFO_PHAZE = 0x268762D2, // Lfo_Phaze
  HV_AMANITAV04_PARAM_IN_LFO_RATE = 0xCE9CDD82, // Lfo_Rate
  HV_AMANITAV04_PARAM_IN_LOWPASS_FREQ = 0x4123BB7, // Lowpass_Freq
  HV_AMANITAV04_PARAM_IN_LOWPASS_RES = 0x6A5226EA, // Lowpass_Res
  HV_AMANITAV04_PARAM_IN_MONO_STERO_IN = 0x4519E135, // Mono_Stero_In
  HV_AMANITAV04_PARAM_IN_NOISE_AGGRO = 0x7B3C1830, // Noise_Aggro
  HV_AMANITAV04_PARAM_IN_NOISE_LVL = 0x80BB8803, // Noise_Lvl
  HV_AMANITAV04_PARAM_IN_PAN = 0x3779CB25, // Pan
  HV_AMANITAV04_PARAM_IN_SIDECHAIN = 0xCA91F83B, // Sidechain
  HV_AMANITAV04_PARAM_IN_STEREO_PINGPONG = 0x821BE185, // Stereo_PingPong
  HV_AMANITAV04_PARAM_IN_SYNC_DELAYS = 0xB8FDF5C9, // Sync_Delays
  HV_AMANITAV04_PARAM_IN_TEMPO_SYNC = 0xAD9B5744, // Tempo_Sync
  HV_AMANITAV04_PARAM_IN_WET_MIX = 0xF245D837, // Wet_Mix
} Hv_AmanitaV04_ParameterIn;


/**
 * Creates a new patch instance.
 * Sample rate should be positive and in Hertz, e.g. 44100.0.
 */
HeavyContextInterface *hv_AmanitaV04_new(double sampleRate);

/**
 * Creates a new patch instance.
 * @param sampleRate  Sample rate should be positive (> 0) and in Hertz, e.g. 48000.0.
 * @param poolKb  Pool size is in kilobytes, and determines the maximum amount of memory
 *   allocated to messages at any time. By default this is 10 KB.
 * @param inQueueKb  The size of the input message queue in kilobytes. It determines the
 *   amount of memory dedicated to holding scheduled messages between calls to
 *   process(). Default is 2 KB.
 * @param outQueueKb  The size of the output message queue in kilobytes. It determines the
 *   amount of memory dedicated to holding scheduled messages to the default sendHook.
 *   See getNextSentMessage() for info on accessing these messages. Default is 0 KB.
 */
HeavyContextInterface *hv_AmanitaV04_new_with_options(double sampleRate, int poolKb, int inQueueKb, int outQueueKb);

/**
 * Free the patch instance.
 */
void hv_AmanitaV04_free(HeavyContextInterface *instance);


#ifdef __cplusplus
} // extern "C"
#endif

#endif // _HEAVY_AMANITAV04_H_
