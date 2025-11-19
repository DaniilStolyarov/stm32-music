#include "../Include/SheetNote.h"
#ifndef TEMPO
#define TEMPO = 1000
#endif

SheetNote::SheetNote(int _len, Octave _octave, NoteOffset _noteOffset, bool _smoothTransition)
{
    len = _len; octave = _octave; noteOffset = _noteOffset;
    smoothTransition = _smoothTransition;
    isPause = false;
    activated = false;
}

SheetNote::SheetNote(int _len)
{
    len = _len;
    isPause = true;
}