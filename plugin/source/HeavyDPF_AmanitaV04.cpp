/** SporePrintDSP */

#include "Heavy_AmanitaV04.h"
#include "HeavyDPF_AmanitaV04.hpp"
#include <set>



#define HV_HASH_NOTEIN          0x67E37CA3
#define HV_HASH_CTLIN           0x41BE0f9C
#define HV_HASH_POLYTOUCHIN     0xBC530F59
#define HV_HASH_PGMIN           0x2E1EA03D
#define HV_HASH_TOUCHIN         0x553925BD
#define HV_HASH_BENDIN          0x3083F0F7
#define HV_HASH_MIDIIN          0x149631bE
#define HV_HASH_MIDIREALTIMEIN  0x6FFF0BCF

#define HV_HASH_NOTEOUT         0xD1D4AC2
#define HV_HASH_CTLOUT          0xE5e2A040
#define HV_HASH_POLYTOUCHOUT    0xD5ACA9D1
#define HV_HASH_PGMOUT          0x8753E39E
#define HV_HASH_TOUCHOUT        0x476D4387
#define HV_HASH_BENDOUT         0xE8458013
#define HV_HASH_MIDIOUT         0x6511DE55
#define HV_HASH_MIDIOUTPORT     0x165707E4

#define MIDI_RT_CLOCK           0xF8
#define MIDI_RT_START           0xFA
#define MIDI_RT_CONTINUE        0xFB
#define MIDI_RT_STOP            0xFC
#define MIDI_RT_ACTIVESENSE     0xFE
#define MIDI_RT_RESET           0xFF

#define HV_HASH_DPF_BPM         0xDF8C2721

// midi realtime messages
std::set<int> mrtSet {
  MIDI_RT_CLOCK,
  MIDI_RT_START,
  MIDI_RT_CONTINUE,
  MIDI_RT_STOP,
  MIDI_RT_RESET
};


START_NAMESPACE_DISTRHO


// -------------------------------------------------------------------
// Heavy Send and Print hooks

static void hvSendHookFunc(HeavyContextInterface *c, const char *sendName, uint32_t sendHash, const HvMessage *m)
{
  HeavyDPF_AmanitaV04* plugin = (HeavyDPF_AmanitaV04*)c->getUserData();
  if (plugin != nullptr)
  {
    plugin->setOutputParameter(sendHash, m);
  }
}

static void hvPrintHookFunc(HeavyContextInterface *c, const char *printLabel, const char *msgString, const HvMessage *m)
{
  char buf[64];
  char* dst = buf;
  int len = strnlen(printLabel, 48);
  dst = strncpy(dst, printLabel, len);
  dst = strcpy(dst, " ");
  dst = strncpy(dst, msgString, 63-len);
  printf("> %s \n", buf);
}

// -------------------------------------------------------------------
// Main DPF plugin class

HeavyDPF_AmanitaV04::HeavyDPF_AmanitaV04()
 : Plugin(HV_DPF_NUM_PARAMETER, 0, 0)
{
  
  _parameters[0] = 2.0f;
  _parameters[1] = 0.5f;
  _parameters[2] = 0.5f;
  _parameters[3] = 0.3f;
  _parameters[4] = 0.0f;
  _parameters[5] = 0.0f;
  _parameters[6] = 60.0f;
  _parameters[7] = 0.3f;
  _parameters[8] = 0.0f;
  _parameters[9] = 0.5f;
  _parameters[10] = 1.0f;
  _parameters[11] = 5000.0f;
  _parameters[12] = 0.4f;
  _parameters[13] = 1.0f;
  _parameters[14] = 0.2f;
  _parameters[15] = 0.3f;
  _parameters[16] = 1.0f;
  _parameters[17] = 0.0f;
  _parameters[18] = 0.0f;
  _parameters[19] = 1.0f;
  _parameters[20] = 1.0f;
  _parameters[21] = 0.3f;

  _context = hv_AmanitaV04_new_with_options(getSampleRate(), 10, 22, 2);
  _context->setUserData(this);
  _context->setSendHook(&hvSendHookFunc);
  _context->setPrintHook(&hvPrintHookFunc);

  
  // ensure that the new context has the current parameters
  for (int i = 0; i < HV_DPF_NUM_PARAMETER; ++i) {
    setParameterValue(i, _parameters[i]);
  }
}

HeavyDPF_AmanitaV04::~HeavyDPF_AmanitaV04() {
  hv_AmanitaV04_free(_context);
}

void HeavyDPF_AmanitaV04::initParameter(uint32_t index, Parameter& parameter)
{// initialise parameters with defaults
  switch (index)
  {
    
      case paramBitrate:
        parameter.name = "Bitrate";
        parameter.symbol = "bitrate";
        parameter.hints = kParameterIsAutomatable| kParameterIsInteger;
        parameter.ranges.min = 0.0f;
        parameter.ranges.max = 2.0f;
        parameter.ranges.def = 2.0f;
        break;
    
      case paramDel_Left:
        parameter.name = "Del Left";
        parameter.symbol = "del_left";
        parameter.hints = kParameterIsAutomatable;
        parameter.ranges.min = 0.0f;
        parameter.ranges.max = 1.0f;
        parameter.ranges.def = 0.5f;
        break;
    
      case paramDel_Right:
        parameter.name = "Del Right";
        parameter.symbol = "del_right";
        parameter.hints = kParameterIsAutomatable;
        parameter.ranges.min = 0.0f;
        parameter.ranges.max = 1.0f;
        parameter.ranges.def = 0.5f;
        break;
    
      case paramFeedback:
        parameter.name = "Feedback";
        parameter.symbol = "feedback";
        parameter.hints = kParameterIsAutomatable;
        parameter.ranges.min = 0.0f;
        parameter.ranges.max = 1.0f;
        parameter.ranges.def = 0.3f;
        break;
    
      case paramFeel_Left:
        parameter.name = "Feel Left";
        parameter.symbol = "feel_left";
        parameter.hints = kParameterIsAutomatable
        | kParameterIsBoolean;
        parameter.ranges.min = 0.0f;
        parameter.ranges.max = 1.0f;
        parameter.ranges.def = 0.0f;
        break;
    
      case paramFeel_Right:
        parameter.name = "Feel Right";
        parameter.symbol = "feel_right";
        parameter.hints = kParameterIsAutomatable
        | kParameterIsBoolean;
        parameter.ranges.min = 0.0f;
        parameter.ranges.max = 1.0f;
        parameter.ranges.def = 0.0f;
        break;
    
      case paramHipass_Freq:
        parameter.name = "Hipass Freq";
        parameter.symbol = "hipass_freq";
        parameter.hints = kParameterIsAutomatable;
        parameter.ranges.min = 41.0f;
        parameter.ranges.max = 1200.0f;
        parameter.ranges.def = 60.0f;
        break;
    
      case paramHipass_Res:
        parameter.name = "Hipass Res";
        parameter.symbol = "hipass_res";
        parameter.hints = kParameterIsAutomatable;
        parameter.ranges.min = 0.0f;
        parameter.ranges.max = 1.0f;
        parameter.ranges.def = 0.3f;
        break;
    
      case paramLfo_Amount:
        parameter.name = "Lfo Amount";
        parameter.symbol = "lfo_amount";
        parameter.hints = kParameterIsAutomatable;
        parameter.ranges.min = 0.0f;
        parameter.ranges.max = 20.0f;
        parameter.ranges.def = 0.0f;
        break;
    
      case paramLfo_Phaze:
        parameter.name = "Lfo Phaze";
        parameter.symbol = "lfo_phaze";
        parameter.hints = kParameterIsAutomatable;
        parameter.ranges.min = -1.0f;
        parameter.ranges.max = 1.0f;
        parameter.ranges.def = 0.5f;
        break;
    
      case paramLfo_Rate:
        parameter.name = "Lfo Rate";
        parameter.symbol = "lfo_rate";
        parameter.unit = "Hz";
        parameter.hints = kParameterIsAutomatable;
        parameter.ranges.min = 0.001f;
        parameter.ranges.max = 25.0f;
        parameter.ranges.def = 1.0f;
        break;
    
      case paramLowpass_Freq:
        parameter.name = "Lowpass Freq";
        parameter.symbol = "lowpass_freq";
        parameter.hints = kParameterIsAutomatable;
        parameter.ranges.min = 50.0f;
        parameter.ranges.max = 20000.0f;
        parameter.ranges.def = 5000.0f;
        break;
    
      case paramLowpass_Res:
        parameter.name = "Lowpass Res";
        parameter.symbol = "lowpass_res";
        parameter.hints = kParameterIsAutomatable;
        parameter.ranges.min = 0.0f;
        parameter.ranges.max = 1.0f;
        parameter.ranges.def = 0.4f;
        break;
    
      case paramMono_Stero_In:
        parameter.name = "Mono Stero In";
        parameter.symbol = "mono_stero_in";
        parameter.hints = kParameterIsAutomatable
        | kParameterIsBoolean;
        parameter.ranges.min = 0.0f;
        parameter.ranges.max = 1.0f;
        parameter.ranges.def = 1.0f;
        break;
    
      case paramNoise_Aggro:
        parameter.name = "Noise Aggro";
        parameter.symbol = "noise_aggro";
        parameter.hints = kParameterIsAutomatable;
        parameter.ranges.min = 0.0f;
        parameter.ranges.max = 1.3f;
        parameter.ranges.def = 0.2f;
        break;
    
      case paramNoise_Lvl:
        parameter.name = "Noise Lvl";
        parameter.symbol = "noise_lvl";
        parameter.hints = kParameterIsAutomatable;
        parameter.ranges.min = 0.0f;
        parameter.ranges.max = 1.0f;
        parameter.ranges.def = 0.3f;
        break;
    
      case paramPan:
        parameter.name = "Pan";
        parameter.symbol = "pan";
        parameter.hints = kParameterIsAutomatable;
        parameter.ranges.min = 0.0f;
        parameter.ranges.max = 2.0f;
        parameter.ranges.def = 1.0f;
        break;
    
      case paramSidechain:
        parameter.name = "Sidechain";
        parameter.symbol = "sidechain";
        parameter.hints = kParameterIsAutomatable;
        parameter.ranges.min = 0.0f;
        parameter.ranges.max = 1.0f;
        parameter.ranges.def = 0.0f;
        break;
    
      case paramStereo_PingPong:
        parameter.name = "Stereo PingPong";
        parameter.symbol = "stereo_pingpong";
        parameter.hints = kParameterIsAutomatable
        | kParameterIsBoolean;
        parameter.ranges.min = 0.0f;
        parameter.ranges.max = 1.0f;
        parameter.ranges.def = 0.0f;
        break;
    
      case paramSync_Delays:
        parameter.name = "Sync Delays";
        parameter.symbol = "sync_delays";
        parameter.hints = kParameterIsAutomatable
        | kParameterIsBoolean;
        parameter.ranges.min = 0.0f;
        parameter.ranges.max = 1.0f;
        parameter.ranges.def = 1.0f;
        break;
    
      case paramTempo_Sync:
        parameter.name = "Tempo Sync";
        parameter.symbol = "tempo_sync";
        parameter.hints = kParameterIsAutomatable
        | kParameterIsBoolean;
        parameter.ranges.min = 0.0f;
        parameter.ranges.max = 1.0f;
        parameter.ranges.def = 1.0f;
        break;
    
      case paramWet_Mix:
        parameter.name = "Wet Mix";
        parameter.symbol = "wet_mix";
        parameter.hints = kParameterIsAutomatable;
        parameter.ranges.min = 0.0f;
        parameter.ranges.max = 1.0f;
        parameter.ranges.def = 0.3f;
        break;
    }
  
}

// -------------------------------------------------------------------
// Internal data

float HeavyDPF_AmanitaV04::getParameterValue(uint32_t index) const
{
  return _parameters[index];
  
}

void HeavyDPF_AmanitaV04::setParameterValue(uint32_t index, float value)
{
  switch (index) {
    case 0: {
      _context->sendFloatToReceiver(
        Heavy_AmanitaV04::Parameter::In::BITRATE,
        value);
      break;
    }
    
    case 1: {
      _context->sendFloatToReceiver(
        Heavy_AmanitaV04::Parameter::In::DEL_LEFT,
        value);
      break;
    }
    
    case 2: {
      _context->sendFloatToReceiver(
        Heavy_AmanitaV04::Parameter::In::DEL_RIGHT,
        value);
      break;
    }
    
    case 3: {
      _context->sendFloatToReceiver(
        Heavy_AmanitaV04::Parameter::In::FEEDBACK,
        value);
      break;
    }
    
    case 4: {
      _context->sendFloatToReceiver(
        Heavy_AmanitaV04::Parameter::In::FEEL_LEFT,
        value);
      break;
    }
    
    case 5: {
      _context->sendFloatToReceiver(
        Heavy_AmanitaV04::Parameter::In::FEEL_RIGHT,
        value);
      break;
    }
    
    case 6: {
      _context->sendFloatToReceiver(
        Heavy_AmanitaV04::Parameter::In::HIPASS_FREQ,
        value);
      break;
    }
    
    case 7: {
      _context->sendFloatToReceiver(
        Heavy_AmanitaV04::Parameter::In::HIPASS_RES,
        value);
      break;
    }
    
    case 8: {
      _context->sendFloatToReceiver(
        Heavy_AmanitaV04::Parameter::In::LFO_AMOUNT,
        value);
      break;
    }
    
    case 9: {
      _context->sendFloatToReceiver(
        Heavy_AmanitaV04::Parameter::In::LFO_PHAZE,
        value);
      break;
    }
    
    case 10: {
      _context->sendFloatToReceiver(
        Heavy_AmanitaV04::Parameter::In::LFO_RATE,
        value);
      break;
    }
    
    case 11: {
      _context->sendFloatToReceiver(
        Heavy_AmanitaV04::Parameter::In::LOWPASS_FREQ,
        value);
      break;
    }
    
    case 12: {
      _context->sendFloatToReceiver(
        Heavy_AmanitaV04::Parameter::In::LOWPASS_RES,
        value);
      break;
    }
    
    case 13: {
      _context->sendFloatToReceiver(
        Heavy_AmanitaV04::Parameter::In::MONO_STERO_IN,
        value);
      break;
    }
    
    case 14: {
      _context->sendFloatToReceiver(
        Heavy_AmanitaV04::Parameter::In::NOISE_AGGRO,
        value);
      break;
    }
    
    case 15: {
      _context->sendFloatToReceiver(
        Heavy_AmanitaV04::Parameter::In::NOISE_LVL,
        value);
      break;
    }
    
    case 16: {
      _context->sendFloatToReceiver(
        Heavy_AmanitaV04::Parameter::In::PAN,
        value);
      break;
    }
    
    case 17: {
      _context->sendFloatToReceiver(
        Heavy_AmanitaV04::Parameter::In::SIDECHAIN,
        value);
      break;
    }
    
    case 18: {
      _context->sendFloatToReceiver(
        Heavy_AmanitaV04::Parameter::In::STEREO_PINGPONG,
        value);
      break;
    }
    
    case 19: {
      _context->sendFloatToReceiver(
        Heavy_AmanitaV04::Parameter::In::SYNC_DELAYS,
        value);
      break;
    }
    
    case 20: {
      _context->sendFloatToReceiver(
        Heavy_AmanitaV04::Parameter::In::TEMPO_SYNC,
        value);
      break;
    }
    
    case 21: {
      _context->sendFloatToReceiver(
        Heavy_AmanitaV04::Parameter::In::WET_MIX,
        value);
      break;
    }
    
    default: return;
  }
  _parameters[index] = value;
  
}

void HeavyDPF_AmanitaV04::setOutputParameter(uint32_t sendHash, const HvMessage *m)
{
}


// -------------------------------------------------------------------
// Process

// void HeavyDPF_AmanitaV04::activate()
// {

// }

// void HeavyDPF_AmanitaV04::deactivate()
// {

// }

// -------------------------------------------------------------------
// Host Transport Events handler

void HeavyDPF_AmanitaV04::hostTransportEvents(uint32_t frames)
{
  // Realtime events
  const TimePosition& timePos(getTimePosition());
  bool reset = false;

  if (timePos.playing)
  {
    if (timePos.frame == 0)
    {
      _context->sendMessageToReceiverV(HV_HASH_MIDIREALTIMEIN, 0,
        "ff", (float) MIDI_RT_RESET, 0.0);
      reset = true;
    }

    if (! this->wasPlaying)
    {
      if (timePos.frame == 0)
      {
        _context->sendMessageToReceiverV(HV_HASH_MIDIREALTIMEIN, 0,
          "ff", (float) MIDI_RT_START, 0.0);
      }
      if (! reset)
      {
        _context->sendMessageToReceiverV(HV_HASH_MIDIREALTIMEIN, 0,
          "ff", (float) MIDI_RT_CONTINUE, 0.0);
      }
    }
  }
  else if (this->wasPlaying)
  {
    _context->sendMessageToReceiverV(HV_HASH_MIDIREALTIMEIN, 0,
      "ff", (float) MIDI_RT_STOP, 0.0);
  }
  this->wasPlaying = timePos.playing;

  // sending clock ticks
  if (timePos.playing && timePos.bbt.valid)
  {
    float samplesPerBeat = 60 * getSampleRate() / timePos.bbt.beatsPerMinute;
    float samplesPerTick = samplesPerBeat / 24.0;

    /* get state */
    double nextClockTick = this->nextClockTick;
    double sampleAtCycleStart = this->sampleAtCycleStart;
    double sampleAtCycleEnd = sampleAtCycleStart + frames;

    if (nextClockTick >= 0 && sampleAtCycleStart >= 0 && sampleAtCycleEnd > sampleAtCycleStart) {
      while (nextClockTick < sampleAtCycleEnd) {
        double delayMs = 1000*(nextClockTick - sampleAtCycleStart)/getSampleRate();
        if (delayMs >= 0.0) {
          _context->sendMessageToReceiverV(HV_HASH_MIDIREALTIMEIN, delayMs,
            "ff", (float) MIDI_RT_CLOCK, 0.0);
        }
        nextClockTick += samplesPerTick;
      }
    }

    /* save variables for next cycle */
    this->sampleAtCycleStart = sampleAtCycleEnd;
    this->nextClockTick = nextClockTick;
  }
}


// -------------------------------------------------------------------
// DPF Plugin run() loop

#if DISTRHO_PLUGIN_WANT_MIDI_INPUT
void HeavyDPF_AmanitaV04::run(const float** inputs, float** outputs, uint32_t frames, const MidiEvent* midiEvents, uint32_t midiEventCount)
{
  handleMidiInput(frames, midiEvents, midiEventCount);
#else
void HeavyDPF_AmanitaV04::run(const float** inputs, float** outputs, uint32_t frames)
{
#endif
  hostTransportEvents(frames);

  const TimePosition& timePos(getTimePosition());
  if (timePos.bbt.valid)
    _context->sendMessageToReceiverV(HV_HASH_DPF_BPM, 0, "f", timePos.bbt.beatsPerMinute);

  _context->process((float**)inputs, outputs, frames);
}

// -------------------------------------------------------------------
// Callbacks

void HeavyDPF_AmanitaV04::sampleRateChanged(double newSampleRate)
{
  hv_AmanitaV04_free(_context);

  _context = hv_AmanitaV04_new_with_options(getSampleRate(), 10, 22, 2);
  _context->setUserData(this);
  _context->setSendHook(&hvSendHookFunc);
  _context->setPrintHook(&hvPrintHookFunc);

  // ensure that the new context has the current parameters
  for (int i = 0; i < HV_DPF_NUM_PARAMETER; ++i) {
    setParameterValue(i, _parameters[i]);
  }
}


// -----------------------------------------------------------------------
/* Plugin entry point, called by DPF to create a new plugin instance. */

Plugin* createPlugin()
{
    return new HeavyDPF_AmanitaV04();
}

// -----------------------------------------------------------------------

END_NAMESPACE_DISTRHO