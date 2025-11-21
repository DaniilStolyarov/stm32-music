#ifndef DEBUGSONG_H
#define DEBUGSONG_H
#include "Include/NoteDef.h"
#include "Include/SheetNote.h"
#include "Include/SheetPlayer.h"

typedef struct DebugSongArrangement
{
    int sheetCount;
    Sheet* sheetArray;
};
DebugSongArrangement* DebugSong()
{
    using N = SheetNote;
    static const SheetNote topNoteArray[] =
        {
            N(1),
            N(1),
            N(2, Octave::One, NoteOffset::F ),
            N(1),
           
            N(1),
            N(16, Octave::One, NoteOffset::F ),
            
                       N(1),
            N(1),
            N(2, Octave::One, NoteOffset::F ),
            N(1),
           
            N(1),
            N(16, Octave::One, NoteOffset::F ),
            
                       N(1),
            N(1),
            N(2, Octave::One, NoteOffset::F ),
            N(1),
           
            N(1),
            N(16, Octave::One, NoteOffset::F ),
            
                       N(1),
            N(1),
            N(2, Octave::One, NoteOffset::F ),
            N(1),
           
            N(1),
            N(16, Octave::One, NoteOffset::F ),
            
                       N(1),
            N(1),
            N(2, Octave::One, NoteOffset::F ),
            N(1),
           
            N(1),
            N(16, Octave::One, NoteOffset::F ),
            
                       N(1),
            N(1),
            N(2, Octave::One, NoteOffset::F ),
            N(1),
           
            N(1),
            N(16, Octave::One, NoteOffset::F ),
            
                       N(1),
            N(1),
            N(2, Octave::One, NoteOffset::F ),
            N(1),
           
            N(1),
            N(16, Octave::One, NoteOffset::F ),
            
                       N(1),
            N(1),
            N(2, Octave::One, NoteOffset::F ),
            N(1),
           
            N(1),
            N(16, Octave::One, NoteOffset::F ),
            
                       N(1),
            N(1),
            N(2, Octave::One, NoteOffset::F ),
            N(1),
           
            N(1),
            N(16, Octave::One, NoteOffset::F ),
            
                       N(1),
            N(1),
            N(2, Octave::One, NoteOffset::F ),
            N(1),
           
            N(1),
            N(16, Octave::One, NoteOffset::F ),
            
                       N(1),
            N(1),
            N(2, Octave::One, NoteOffset::F ),
            N(1),
           
            N(1),
            N(16, Octave::One, NoteOffset::F ),
            
                       N(1),
            N(1),
            N(2, Octave::One, NoteOffset::F ),
            N(1),
           
            N(1),
            N(16, Octave::One, NoteOffset::F ),
            
                       N(1),
            N(1),
            N(2, Octave::One, NoteOffset::F ),
            N(1),
           
            N(1),
            N(16, Octave::One, NoteOffset::F ),
            
                       N(1),
            N(1),
            N(2, Octave::One, NoteOffset::F ),
            N(1),
           
            N(1),
            N(16, Octave::One, NoteOffset::F ),
            
                       N(1),
            N(1),
            N(2, Octave::One, NoteOffset::F ),
            N(1),
           
            N(1),
            N(16, Octave::One, NoteOffset::F ),
            
                       N(1),
            N(1),
            N(2, Octave::One, NoteOffset::F ),
            N(1),
           
            N(1),
            N(16, Octave::One, NoteOffset::F ),
            
                       N(1),
            N(1),
            N(2, Octave::One, NoteOffset::F ),
            N(1),
           
            N(1),
            N(16, Octave::One, NoteOffset::F ),
            
                       N(1),
            N(1),
            N(2, Octave::One, NoteOffset::F ),
            N(1),
           
            N(1),
            N(16, Octave::One, NoteOffset::F ),
            
                       N(1),
            N(1),
            N(2, Octave::One, NoteOffset::F ),
            N(1),
           
            N(1),
            N(16, Octave::One, NoteOffset::F ),
            
                       N(1),
            N(1),
            N(2, Octave::One, NoteOffset::F ),
            N(1),
           
            N(1),
            N(16, Octave::One, NoteOffset::F ),
            
                       N(1),
            N(1),
            N(2, Octave::One, NoteOffset::F ),
            N(1),
           
            N(1),
            N(16, Octave::One, NoteOffset::F ),
            
                       N(1),
            N(1),
            N(2, Octave::One, NoteOffset::F ),
            N(1),
           
            N(1),
            N(16, Octave::One, NoteOffset::F ),
            
                       N(1),
            N(1),
            N(2, Octave::One, NoteOffset::F ),
            N(1),
           
            N(1),
            N(16, Octave::One, NoteOffset::F ),
            
                       N(1),
            N(1),
            N(2, Octave::One, NoteOffset::F ),
            N(1),
           
            N(1),
            N(16, Octave::One, NoteOffset::F ),
            
                       N(1),
            N(1),
            N(2, Octave::One, NoteOffset::F ),
            N(1),
           
            N(1),
            N(16, Octave::One, NoteOffset::F ),
            
                       N(1),
            N(1),
            N(2, Octave::One, NoteOffset::F ),
            N(1),
           
            N(1),
            N(16, Octave::One, NoteOffset::F ),
            
                       N(1),
            N(1),
            N(2, Octave::One, NoteOffset::F ),
            N(1),
           
            N(1),
            N(16, Octave::One, NoteOffset::F ),
            
                       N(1),
            N(1),
            N(2, Octave::One, NoteOffset::F ),
            N(1),
           
            N(1),
            N(16, Octave::One, NoteOffset::F ),
            
                       N(1),
            N(1),
            N(2, Octave::One, NoteOffset::F ),
            N(1),
           
            N(1),
            N(16, Octave::One, NoteOffset::F ),
            
                       N(1),
            N(1),
            N(2, Octave::One, NoteOffset::F ),
            N(1),
           
            N(1),
            N(16, Octave::One, NoteOffset::F ),
            
                       N(1),
            N(1),
            N(2, Octave::One, NoteOffset::F ),
            N(1),
           
            N(1),
            N(16, Octave::One, NoteOffset::F ),
            
                       N(1),
            N(1),
            N(2, Octave::One, NoteOffset::F ),
            N(1),
           
            N(1),
            N(16, Octave::One, NoteOffset::F ),
            
                       N(1),
            N(1),
            N(2, Octave::One, NoteOffset::F ),
            N(1),
           
            N(1),
            N(16, Octave::One, NoteOffset::F ),
            
                       N(1),
            N(1),
            N(2, Octave::One, NoteOffset::F ),
            N(1),
           
            N(1),
            N(16, Octave::One, NoteOffset::F ),
            
                       N(1),
            N(1),
            N(2, Octave::One, NoteOffset::F ),
            N(1),
           
            N(1),
            N(16, Octave::One, NoteOffset::F ),
            
                       N(1),
            N(1),
            N(2, Octave::One, NoteOffset::F ),
            N(1),
           
            N(1),
            N(16, Octave::One, NoteOffset::F ),
            
                       N(1),
            N(1),
            N(2, Octave::One, NoteOffset::F ),
            N(1),
           
            N(1),
            N(16, Octave::One, NoteOffset::F ),
            
                       N(1),
            N(1),
            N(2, Octave::One, NoteOffset::F ),
            N(1),
           
            N(1),
            N(16, Octave::One, NoteOffset::F ),
            
                       N(1),
            N(1),
            N(2, Octave::One, NoteOffset::F ),
            N(1),
           
            N(1),
            N(16, Octave::One, NoteOffset::F ),
            
                       N(1),
            N(1),
            N(2, Octave::One, NoteOffset::F ),
            N(1),
           
            N(1),
            N(16, Octave::One, NoteOffset::F ),
            
                       N(1),
            N(1),
            N(2, Octave::One, NoteOffset::F ),
            N(1),
           
            N(1),
            N(16, Octave::One, NoteOffset::F ),
            
                       N(1),
            N(1),
            N(2, Octave::One, NoteOffset::F ),
            N(1),
           
            N(1),
            N(16, Octave::One, NoteOffset::F ),
            
                       N(1),
            N(1),
            N(2, Octave::One, NoteOffset::F ),
            N(1),
           
            N(1),
            N(16, Octave::One, NoteOffset::F ),
            
                       N(1),
            N(1),
            N(2, Octave::One, NoteOffset::F ),
            N(1),
           
            N(1),
            N(16, Octave::One, NoteOffset::F ),
            
                       N(1),
            N(1),
            N(2, Octave::One, NoteOffset::F ),
            N(1),
           
            N(1),
            N(16, Octave::One, NoteOffset::F ),
            
                       N(1),
            N(1),
            N(2, Octave::One, NoteOffset::F ),
            N(1),
           
            N(1),
            N(16, Octave::One, NoteOffset::F ),
            
                       N(1),
            N(1),
            N(2, Octave::One, NoteOffset::F ),
            N(1),
           
            N(1),
            N(16, Octave::One, NoteOffset::F ),
            
                       N(1),
            N(1),
            N(2, Octave::One, NoteOffset::F ),
            N(1),
           
            N(1),
            N(16, Octave::One, NoteOffset::F ),
            
                       N(1),
            N(1),
            N(2, Octave::One, NoteOffset::F ),
            N(1),
           
            N(1),
            N(16, Octave::One, NoteOffset::F ),
            
                       N(1),
            N(1),
            N(2, Octave::One, NoteOffset::F ),
            N(1),
           
            N(1),
            N(16, Octave::One, NoteOffset::F ),
            
                       N(1),
            N(1),
            N(2, Octave::One, NoteOffset::F ),
            N(1),
           
            N(1),
            N(16, Octave::One, NoteOffset::F ),
            
                       N(1),
            N(1),
            N(2, Octave::One, NoteOffset::F ),
            N(1),
           
            N(1),
            N(16, Octave::One, NoteOffset::F ),
            
                       N(1),
            N(1),
            N(2, Octave::One, NoteOffset::F ),
            N(1),
           
            N(1),
            N(16, Octave::One, NoteOffset::F ),
            
                       N(1),
            N(1),
            N(2, Octave::One, NoteOffset::F ),
            N(1),
           
            N(1),
            N(16, Octave::One, NoteOffset::F ),
            
                       N(1),
            N(1),
            N(2, Octave::One, NoteOffset::F ),
            N(1),
           
            N(1),
            N(16, Octave::One, NoteOffset::F ),
            
                       N(1),
            N(1),
            N(2, Octave::One, NoteOffset::F ),
            N(1),
           
            N(1),
            N(16, Octave::One, NoteOffset::F ),
            
                       N(1),
            N(1),
            N(2, Octave::One, NoteOffset::F ),
            N(1),
           
            N(1),
            N(16, Octave::One, NoteOffset::F ),
            
                       N(1),
            N(1),
            N(2, Octave::One, NoteOffset::F ),
            N(1),
           
            N(1),
            N(16, Octave::One, NoteOffset::F ),
            
                       N(1),
            N(1),
            N(2, Octave::One, NoteOffset::F ),
            N(1),
           
            N(1),
            N(16, Octave::One, NoteOffset::F ),
            
                       N(1),
            N(1),
            N(2, Octave::One, NoteOffset::F ),
            N(1),
           
            N(1),
            N(16, Octave::One, NoteOffset::F ),
            
                       N(1),
            N(1),
            N(2, Octave::One, NoteOffset::F ),
            N(1),
           
            N(1),
            N(16, Octave::One, NoteOffset::F ),
            
                       N(1),
            N(1),
            N(2, Octave::One, NoteOffset::F ),
            N(1),
           
            N(1),
            N(16, Octave::One, NoteOffset::F ),
            
                       N(1),
            N(1),
            N(2, Octave::One, NoteOffset::F ),
            N(1),
           
            N(1),
            N(16, Octave::One, NoteOffset::F ),
            
                       N(1),
            N(1),
            N(2, Octave::One, NoteOffset::F ),
            N(1),
           
            N(1),
            N(16, Octave::One, NoteOffset::F ),
            
                       N(1),
            N(1),
            N(2, Octave::One, NoteOffset::F ),
            N(1),
           
            N(1),
            N(16, Octave::One, NoteOffset::F ),
            
                       N(1),
            N(1),
            N(2, Octave::One, NoteOffset::F ),
            N(1),
           
            N(1),
            N(16, Octave::One, NoteOffset::F ),
            
                       N(1),
            N(1),
            N(2, Octave::One, NoteOffset::F ),
            N(1),
           
            N(1),
            N(16, Octave::One, NoteOffset::F ),
            
                       N(1),
            N(1),
            N(2, Octave::One, NoteOffset::F ),
            N(1),
           
            N(1),
            N(16, Octave::One, NoteOffset::F ),
            
                       N(1),
            N(1),
            N(2, Octave::One, NoteOffset::F ),
            N(1),
           
            N(1),
            N(16, Octave::One, NoteOffset::F ),
            
                       N(1),
            N(1),
            N(2, Octave::One, NoteOffset::F ),
            N(1),
           
            N(1),
            N(16, Octave::One, NoteOffset::F ),
            
                       N(1),
            N(1),
            N(2, Octave::One, NoteOffset::F ),
            N(1),
           
            N(1),
            N(16, Octave::One, NoteOffset::F ),
            
            
            
        };
    Sheet topSheet = {
        0, 0, topNoteArray, sizeof(topNoteArray) / sizeof(N), false
    };

    // ___________________
    static const SheetNote bottomNoteArray[]
    {
       

    };
   
    Sheet bottomSheet = {
        0, 0, bottomNoteArray, sizeof(bottomNoteArray) / sizeof(N), false
    };
    Sheet* sheetArray = new Sheet[2]{bottomSheet, topSheet};


    DebugSongArrangement* arrangement = new DebugSongArrangement();
    arrangement->sheetArray = sheetArray;
    arrangement->sheetCount = 2;

    return arrangement;
}
#endif // BADAPPLE_H