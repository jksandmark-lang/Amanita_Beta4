/** SporePrintDSP */

#ifndef _HEAVY_LV2_AMANITAV04_
#define _HEAVY_LV2_AMANITAV04_

#include "DistrhoPlugin.hpp"
#include "DistrhoPluginInfo.h"
#include "Heavy_AmanitaV04.hpp"

START_NAMESPACE_DISTRHO

#define HV_DPF_NUM_PARAMETER 22

static void hvSendHookFunc(HeavyContextInterface *c, const char *sendName, uint32_t sendHash, const HvMessage *m);
static void hvPrintHookFunc(HeavyContextInterface *c, const char *printLabel, const char *msgString, const HvMessage *m);

class HeavyDPF_AmanitaV04 : public Plugin
{
public:
  enum Parameters
  {
      paramBitrate,
      paramDel_Left,
      paramDel_Right,
      paramFeedback,
      paramFeel_Left,
      paramFeel_Right,
      paramHipass_Freq,
      paramHipass_Res,
      paramLfo_Amount,
      paramLfo_Phaze,
      paramLfo_Rate,
      paramLowpass_Freq,
      paramLowpass_Res,
      paramMono_Stero_In,
      paramNoise_Aggro,
      paramNoise_Lvl,
      paramPan,
      paramSidechain,
      paramStereo_PingPong,
      paramSync_Delays,
      paramTempo_Sync,
      paramWet_Mix,
  };



  HeavyDPF_AmanitaV04();
  ~HeavyDPF_AmanitaV04() override;

  void handleMidiInput(uint32_t frames, const MidiEvent* midiEvents, uint32_t midiEventCount);
  void handleMidiSend(uint32_t sendHash, const HvMessage *m);
  void hostTransportEvents(uint32_t frames);
  void setOutputParameter(uint32_t sendHash, const HvMessage *m);

protected:
  // -------------------------------------------------------------------
  // Information

  const char* getLabel() const noexcept override
  {
    return "AmanitaV04";
  }
  const char* getDescription() const override
  {
    return "The finest BBD delay emulation the Scandinavian peninsula has to offer.";
  }

  const char* getMaker() const noexcept override
  {
    return "SporePrintDSP";

  }

  const char* getLicense() const noexcept override
  {
    return "ISC";

  }

  uint32_t getVersion() const noexcept override
  {
    return d_version(0, 0, 1);
  }

  int64_t getUniqueId() const noexcept override
  {
    return int64_t( 0xCF4711E1 );
  }

  // -------------------------------------------------------------------
  // Init

  void initParameter(uint32_t index, Parameter& parameter) override;
  

  // -------------------------------------------------------------------
  // Internal data

  float getParameterValue(uint32_t index) const override;
  void  setParameterValue(uint32_t index, float value) override;

  // -------------------------------------------------------------------
  // Process

  // void activate() override;
  // void deactivate() override;

#if DISTRHO_PLUGIN_WANT_MIDI_INPUT
  void run(const float** inputs, float** outputs, uint32_t frames, const MidiEvent* midiEvents, uint32_t midiEventCount) override;
#else
  void run(const float** inputs, float** outputs, uint32_t frames) override;
#endif

  // -------------------------------------------------------------------
  // Callbacks

  void sampleRateChanged(double newSampleRate) override;

  // -------------------------------------------------------------------

private:
  // parameters
  float _parameters[HV_DPF_NUM_PARAMETER];

  // transport values
  bool wasPlaying = false;
  double nextClockTick = 0.0;
  double sampleAtCycleStart = 0.0;

  // midi out buffer
  int midiOutCount;
  MidiEvent midiOutEvent;

  // heavy context
  HeavyContextInterface *_context;

  // HeavyDPF_AmanitaV04<float> fAmanitaV04;

  DISTRHO_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR(HeavyDPF_AmanitaV04)
};

// -----------------------------------------------------------------------

END_NAMESPACE_DISTRHO

#endif // _HEAVY_LV2_AMANITAV04_
