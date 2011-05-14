#ifndef __IPLUGCONTROLSDEMO__
#define __IPLUGCONTROLSDEMO__

#include "IPlug_include_in_plug_hdr.h"

class IPlugControls : public IPlug
{
public:

  IPlugControls(IPlugInstanceInfo instanceInfo);
  ~IPlugControls();

  void Reset();
  void OnParamChange(int paramIdx);

  void ProcessDoubleReplacing(double** inputs, double** outputs, int nFrames);

  private:

  double mGain;
};

#endif