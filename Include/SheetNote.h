#ifndef SHEETNOTE_H
#define SHEETNOTE_H
#include "Include/NoteDef.h"
#include <Arduino.h>
class SheetNote 
{
private:
    bool activated = false;
public:
    uint8_t len;
    bool isPause;
    bool smoothTransition;
    Octave octave;
    NoteOffset noteOffset;
    SheetNote(int _len, Octave _octave, NoteOffset _noteOffset, bool _smoothTransition=false);
    SheetNote(int _len);
    void setActive();
    bool isActivated();
    
};
#endif // SHEET_H