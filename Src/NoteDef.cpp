#include "../Include/NoteDef.h"
#include "Arduino.h"
NoteDef::NoteDef()
{
    for (int octave = (int)Octave::SubContra; octave <= (int)Octave::Five; octave++)
    {
        for (int noteOffset = (int)NoteOffset::C; noteOffset <= (int)NoteOffset::B; noteOffset++)
        {
            notes[octave * 12 + noteOffset] = calcNoteFreq((Octave)octave, (NoteOffset)noteOffset);
        }
    }
}

int NoteDef::calcNoteFreq(Octave octave, NoteOffset noteOffset)
{
    float precise = A0_freq * powf(2.0f, ((float)noteOffset + ((float)octave) * 12) / 12);
    //Serial.println((int)(roundf(precise) + 0.1f));
    
    return (int)(roundf(precise) + 0.1f);
}

int NoteDef::getNote(Octave octave, NoteOffset noteOffset)
{
    return notes[(int)octave * 12 + (int)noteOffset];
}