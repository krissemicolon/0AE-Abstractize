/*
  ==============================================================================

    SynthSound.h
    Created: 4 May 2022 8:18:42pm
    Author:  Kris

  ==============================================================================
*/

#pragma once

#include <JuceHeader.h>

class SynthSound : public juce::SynthesiserSound
{
public:
    bool appliesToNote(int midiNoteNumber) override
    {
        return true;
    }
    
    bool appliesToChannel(int midiChannel) override
    {
        return true;
    }
};
