/*
  ==============================================================================

   This file is part of the JUCE library - "Jules' Utility Class Extensions"
   Copyright 2004-10 by Raw Material Software Ltd.

  ------------------------------------------------------------------------------

   JUCE can be redistributed and/or modified under the terms of the GNU General
   Public License (Version 2), as published by the Free Software Foundation.
   A copy of the license is included in the JUCE distribution, or can be found
   online at www.gnu.org/licenses.

   JUCE is distributed in the hope that it will be useful, but WITHOUT ANY
   WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR
   A PARTICULAR PURPOSE.  See the GNU General Public License for more details.

  ------------------------------------------------------------------------------

   To release a closed-source product which uses JUCE, commercial licenses are
   available: visit www.rawmaterialsoftware.com/juce for more information.

  ==============================================================================
*/

#ifdef ADD_TO_LIST
  ADD_TO_LIST (SliderHandler);
#else

#include "../jucer_ComponentDocument.h"


//==============================================================================
class SliderHandler  : public ComponentTypeHelper<Slider>
{
public:
    SliderHandler() : ComponentTypeHelper<Slider> ("Slider", "SLIDER", "slider")
    {
        addEditableColour (Slider::backgroundColourId, "Background", "backgroundColour");
        addEditableColour (Slider::thumbColourId, "Thumb", "thumbColour");
        addEditableColour (Slider::trackColourId, "Track", "trackColour");
        addEditableColour (Slider::rotarySliderFillColourId, "Rotary Fill", "rotaryFillColour");
        addEditableColour (Slider::rotarySliderOutlineColourId, "Rotary Outline", "rotaryOutlineColour");
        addEditableColour (Slider::textBoxTextColourId, "Text", "textColour");
        addEditableColour (Slider::textBoxBackgroundColourId, "Text Background", "textBackgroundColour");
        addEditableColour (Slider::textBoxHighlightColourId, "Text Highlight", "textHighlightColour");
        addEditableColour (Slider::textBoxOutlineColourId, "Textbox Outline", "textboxOutlineColour");
    }

    ~SliderHandler()  {}

    Component* createComponent()                { return new Slider (String::empty); }
    const Rectangle<int> getDefaultSize()       { return Rectangle<int> (0, 0, 200, 24); }

    void update (ComponentDocument& document, Slider* comp, const ValueTree& state)
    {
    }

    void initialiseNew (ComponentDocument& document, ValueTree& state)
    {
    }

    void createProperties (ComponentDocument& document, ValueTree& state, Array <PropertyComponent*>& props)
    {
        addTooltipProperty (document, state, props);
        addFocusOrderProperty (document, state, props);
        addEditableColourProperties (document, state, props);
    }
};

#endif