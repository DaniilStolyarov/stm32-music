#ifndef SHEETPLAYER_H
#define SHEETPLAYER_H

#include "Include/TonePlayer.h"
#include "Include/SheetNote.h"
#include "Include/NoteDef.h"

typedef struct Sheet
{
    uint32_t currentNoteTimestamp = 0;
    int currentNoteIndex = 0;
    const SheetNote* noteArray;
    int noteCount;
    bool isCurrentNoteActivated = false;
};

class SheetPlayer
{
private:
    int sheetCount;
    TonePlayer** tonePlayers;
    
    NoteDef* noteDef;

    int transitionDelay = 16;
public:
    Sheet* sheets;
    int beat = 1600;
    SheetPlayer(int _sheetCount, TonePlayer** _tonePlayers, Sheet* _sheets);
    void play();
    void (*afterNotePlayed)(int sheetIndex);
};

#endif // SHEETPLAYER_H