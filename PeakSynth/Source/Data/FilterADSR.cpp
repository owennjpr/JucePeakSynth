/*
  ==============================================================================

    filterADSR.cpp
    Created: 1 Jul 2023 11:16:46am
    Author:  Owen Prendergast

  ==============================================================================
*/

#include "FilterADSR.h"

void FilterADSR::update (const float attack, const float decay, const float sustain, const float release)
{
    adsrParams.attack = attack;
    adsrParams.decay = decay;
    adsrParams.sustain = sustain;
    adsrParams.release = release;
      
    setParameters (adsrParams);
}
