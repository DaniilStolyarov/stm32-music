#ifndef GIORNO_H
#define GIORNO_H
#include "Include/NoteDef.h"
#include "Include/SheetNote.h"
#include "Include/SheetPlayer.h"

typedef struct GiornoArrangement
{
    int sheetCount;
    Sheet* sheetArray;
};
GiornoArrangement* GiornoSong()
{
    using N = SheetNote;
    static const SheetNote topNoteArray[] =
        {
            N(1), // 0
            //////////////
            N(8, Octave::Great, NoteOffset::B),
            N(8, Octave::Great, NoteOffset::B),
            N(16, Octave::Great, NoteOffset::B),
            N(16, Octave::Great, NoteOffset::A),
            N(16),
            N(16, Octave::Great, NoteOffset::B),
            N(16),
            N(16, Octave::Small, NoteOffset::D),
            N(16),  
            N(16, Octave::Great, NoteOffset::B),
            N(16),
            N(16, Octave::Great, NoteOffset::Fs),
            N(16, Octave::Great, NoteOffset::A),
            // 1

            N(8, Octave::Great, NoteOffset::B),
            N(8, Octave::Great, NoteOffset::B),
            N(16, Octave::Great, NoteOffset::B),
            N(16, Octave::Great, NoteOffset::A),
            N(16, Octave::Great, NoteOffset::B),
            N(16, Octave::Small, NoteOffset::D),
            N(16),
            N(16, Octave::Small, NoteOffset::F),
            N(16),  
            N(16, Octave::Small, NoteOffset::E),
            N(16),
            N(16, Octave::Great, NoteOffset::D),
            N(16, Octave::Great, NoteOffset::B),
            // 2

            N(8, Octave::Great, NoteOffset::B),
            N(8, Octave::Great, NoteOffset::B),
            N(16, Octave::Great, NoteOffset::B),
            N(16, Octave::Great, NoteOffset::A),
            N(16),
            N(16, Octave::Great, NoteOffset::B),
            N(16),
            N(16, Octave::Small, NoteOffset::D),
            N(16),  
            N(16, Octave::Great, NoteOffset::B),
            N(16),
            N(16, Octave::Great, NoteOffset::Fs),
            N(16, Octave::Great, NoteOffset::A),
            // 3

            N(8, Octave::Great, NoteOffset::B),
            N(8, Octave::Great, NoteOffset::B),
            N(16, Octave::Great, NoteOffset::B),
            N(16, Octave::Great, NoteOffset::A),
            N(16, Octave::Great, NoteOffset::B),
            N(16, Octave::Small, NoteOffset::D),
            N(16),
            N(16, Octave::Small, NoteOffset::F),
            N(16),  
            N(16, Octave::Small, NoteOffset::E),
            N(16),
            N(16, Octave::Great, NoteOffset::D),
            N(16, Octave::Great, NoteOffset::B),
            // 4
            N(8, Octave::Great, NoteOffset::B),
            N(8, Octave::Great, NoteOffset::B),
            N(16, Octave::Great, NoteOffset::B),
            N(16, Octave::Great, NoteOffset::A),
            N(16),
            N(16, Octave::Great, NoteOffset::B),
            N(16),
            N(16, Octave::Small, NoteOffset::D),
            N(16),  
            N(16, Octave::Great, NoteOffset::B),
            N(16),
            N(16, Octave::Great, NoteOffset::Fs),
            N(16, Octave::Great, NoteOffset::A),
            // 5

            N(8, Octave::Great, NoteOffset::B),
            N(8, Octave::Great, NoteOffset::B),
            N(16, Octave::Great, NoteOffset::B),
            N(16, Octave::Great, NoteOffset::A),
            N(16, Octave::Great, NoteOffset::B),
            N(16, Octave::Small, NoteOffset::D),
            N(16),
            N(16, Octave::Small, NoteOffset::F),
            N(16),  
            N(16, Octave::Small, NoteOffset::E),
            N(16),
            N(16, Octave::Great, NoteOffset::D),
            N(16, Octave::Great, NoteOffset::B),
            // 6

            N(8, Octave::Great, NoteOffset::B),
            N(8, Octave::Great, NoteOffset::B),
            N(16, Octave::Great, NoteOffset::B),
            N(16, Octave::Great, NoteOffset::A),
            N(16),
            N(16, Octave::Great, NoteOffset::B),
            N(16),
            N(16, Octave::Small, NoteOffset::D),
            N(16),  
            N(16, Octave::Great, NoteOffset::B),
            N(16),
            N(16, Octave::Great, NoteOffset::Fs),
            N(16, Octave::Great, NoteOffset::A),
            // 7

            N(8, Octave::Great, NoteOffset::B),
            N(8, Octave::Great, NoteOffset::B),
            N(16, Octave::Great, NoteOffset::B),
            N(16),
            N(16, Octave::Great, NoteOffset::A),
            N(4, Octave::Great, NoteOffset::B),
            N(16),
            N(16, Octave::Great, NoteOffset::B),
            N(16, Octave::Small, NoteOffset::Cs),
            N(16, Octave::Small, NoteOffset::D),
            N(16, Octave::Small, NoteOffset::E),
            // 8

            N(2, Octave::Small, NoteOffset::Fs, true),
            N(8, Octave::Small, NoteOffset::Fs),
            N(8, Octave::Great, NoteOffset::B),
            N(8, Octave::Small, NoteOffset::D),
            N(8, Octave::Small, NoteOffset::A),
            // 9
            N(2, Octave::Small, NoteOffset::Gs, true),
            N(8, Octave::Small, NoteOffset::Gs),
            N(4, Octave::Small, NoteOffset::Fs),
            N(8, Octave::Small, NoteOffset::E),
            // 10
            N(1, Octave::Small, NoteOffset::Fs),
            // 11
            N(8, Octave::Great, NoteOffset::B, true),
            N(16, Octave::Great, NoteOffset::B),
            N(8, Octave::Great, NoteOffset::B, true),
            N(16, Octave::Great, NoteOffset::B),
            N(8, Octave::Great, NoteOffset::B, true),
            N(16, Octave::Great, NoteOffset::B),
            N(8, Octave::Great, NoteOffset::B, true),
            N(16, Octave::Great, NoteOffset::B),
            N(16, Octave::Great, NoteOffset::B),
            N(16, Octave::Small, NoteOffset::Cs),
            N(16, Octave::Small, NoteOffset::D),
            N(16, Octave::Small, NoteOffset::E),
            // 12
            N(2, Octave::Small, NoteOffset::Fs, true),
            N(8, Octave::Small, NoteOffset::Fs),
            N(8, Octave::Great, NoteOffset::B),
            N(8, Octave::Small, NoteOffset::D),
            N(8, Octave::Small, NoteOffset::A),
            // 13
            N(4, Octave::Small, NoteOffset::Gs, true),
            N(8, Octave::Small, NoteOffset::Gs),
            N(4, Octave::Small, NoteOffset::A, true),
            N(8, Octave::Small, NoteOffset::A),
            N(4, Octave::Small, NoteOffset::B),
            // 14
            N(4, Octave::Small, NoteOffset::Gs, true),
            N(8, Octave::Small, NoteOffset::Gs, true),
            N(2, Octave::Small, NoteOffset::Fs, true),
            N(4, Octave::Small, NoteOffset::Fs, true),
            N(16),
            //15
            N(2),
            N(4),
            N(16, Octave::Great, NoteOffset::B),
            N(16, Octave::Small, NoteOffset::Cs),
            N(16, Octave::Small, NoteOffset::D),
            N(16, Octave::Small, NoteOffset::E),
            // 16

            N(2, Octave::Small, NoteOffset::Fs, true),
            N(8, Octave::Small, NoteOffset::Fs),
            N(8, Octave::Great, NoteOffset::B),
            N(8, Octave::Small, NoteOffset::D),
            N(8, Octave::Small, NoteOffset::A),
            // 17
            N(2, Octave::Small, NoteOffset::Gs, true),
            N(8, Octave::Small, NoteOffset::Gs),
            N(4, Octave::Small, NoteOffset::Fs),
            N(8, Octave::Small, NoteOffset::E),
            // 18
            N(1, Octave::Small, NoteOffset::Fs),
            // 19
            N(8, Octave::Great, NoteOffset::B, true),
            N(16, Octave::Great, NoteOffset::B),
            N(8, Octave::Great, NoteOffset::B, true),
            N(16, Octave::Great, NoteOffset::B),
            N(8, Octave::Great, NoteOffset::B, true),
            N(16, Octave::Great, NoteOffset::B),
            N(8, Octave::Great, NoteOffset::B, true),
            N(16, Octave::Great, NoteOffset::B),
            N(16, Octave::Great, NoteOffset::B),
            N(16, Octave::Small, NoteOffset::Cs),
            N(16, Octave::Small, NoteOffset::D),
            N(16, Octave::Small, NoteOffset::E),
            // 20
            N(2, Octave::Small, NoteOffset::Fs, true),
            N(8, Octave::Small, NoteOffset::Fs),
            N(8, Octave::Great, NoteOffset::B),
            N(8, Octave::Small, NoteOffset::D),
            N(8, Octave::Small, NoteOffset::A),
            // 21
            N(4, Octave::Small, NoteOffset::B, true),
            N(8, Octave::Small, NoteOffset::B),
            N(4, Octave::Small, NoteOffset::A, true),
            N(8, Octave::Small, NoteOffset::A),
            N(4, Octave::Small, NoteOffset::Gs),
            // 22
            N(1, Octave::Small, NoteOffset::Fs),
            
            

        };
    Sheet topSheet = {
        0, 0, topNoteArray, sizeof(topNoteArray) / sizeof(N), false
    };

    // ___________________
    static const SheetNote bottomNoteArray[]
    {
        N(1), // 0
        ////////////////////////////
        N(1),
        // 1
        N(1),
        // 2
        N(8, Octave::Contra, NoteOffset::B),
        N(8, Octave::Contra, NoteOffset::B),
        N(16, Octave::Contra, NoteOffset::B),
        N(16, Octave::Contra, NoteOffset::A),
        N(16),
        N(16, Octave::Contra, NoteOffset::B),
        N(16),
        N(16, Octave::Great, NoteOffset::D),
        N(16),  
        N(16, Octave::Contra, NoteOffset::B),
        N(16),
        N(16, Octave::Contra, NoteOffset::Fs),
        N(16, Octave::Contra, NoteOffset::A),
        // 3
        N(8, Octave::Contra, NoteOffset::B),
        N(8, Octave::Contra, NoteOffset::B),
        N(16, Octave::Contra, NoteOffset::B),
        N(16, Octave::Contra, NoteOffset::A),
        N(16, Octave::Contra, NoteOffset::B),
        N(16, Octave::Great, NoteOffset::D),
        N(16),
        N(16, Octave::Great, NoteOffset::F),
        N(16),  
        N(16, Octave::Great, NoteOffset::E),
        N(16),
        N(16, Octave::Contra, NoteOffset::D),
        N(16, Octave::Contra, NoteOffset::B),
        // 4
        N(8, Octave::Contra, NoteOffset::B),
        N(8, Octave::Contra, NoteOffset::B),
        N(16, Octave::Contra, NoteOffset::B),
        N(16, Octave::Contra, NoteOffset::A),
        N(16),
        N(16, Octave::Contra, NoteOffset::B),
        N(16),
        N(16, Octave::Great, NoteOffset::D),
        N(16),  
        N(16, Octave::Contra, NoteOffset::B),
        N(16),
        N(16, Octave::Contra, NoteOffset::Fs),
        N(16, Octave::Contra, NoteOffset::A),
        // 5
        N(8, Octave::Contra, NoteOffset::B),
        N(8, Octave::Contra, NoteOffset::B),
        N(16, Octave::Contra, NoteOffset::B),
        N(16, Octave::Contra, NoteOffset::A),
        N(16, Octave::Contra, NoteOffset::B),
        N(16, Octave::Great, NoteOffset::D),
        N(16),
        N(16, Octave::Great, NoteOffset::F),
        N(16),  
        N(16, Octave::Great, NoteOffset::E),
        N(16),
        N(16, Octave::Contra, NoteOffset::D),
        N(16, Octave::Contra, NoteOffset::B),
        // 6

        N(8, Octave::Contra, NoteOffset::B),
        N(8, Octave::Contra, NoteOffset::B),
        N(16, Octave::Contra, NoteOffset::B),
        N(16, Octave::Contra, NoteOffset::A),
        N(16),
        N(16, Octave::Contra, NoteOffset::B),
        N(16),
        N(16, Octave::Great, NoteOffset::D),
        N(16),  
        N(16, Octave::Contra, NoteOffset::B),
        N(16),
        N(16, Octave::Contra, NoteOffset::Fs),
        N(16, Octave::Contra, NoteOffset::A),
        // 7
       
        N(8, Octave::Contra, NoteOffset::B),
        N(8, Octave::Contra, NoteOffset::B),
        N(16, Octave::Contra, NoteOffset::B),
        N(16),
        N(16, Octave::Contra, NoteOffset::A),
        N(4, Octave::Contra, NoteOffset::B),
        N(16),
        N(4),
        // 8
        N(8, Octave::Contra, NoteOffset::B),
        N(8, Octave::Great, NoteOffset::D),
        N(16, Octave::Great, NoteOffset::E),
        N(8, Octave::Great, NoteOffset::F),
        N(8, Octave::Great, NoteOffset::Fs),
        N(8, Octave::Great, NoteOffset::A),
        N(8, Octave::Great, NoteOffset::Fs),
        N(8, Octave::Great, NoteOffset::A),
        N(8, Octave::Great, NoteOffset::As),
        // 9
        N(8, Octave::Great, NoteOffset::B),
        N(8, Octave::Great, NoteOffset::As),
        N(16, Octave::Great, NoteOffset::A),
        N(8, Octave::Great, NoteOffset::Fs),
        N(8, Octave::Great, NoteOffset::E),
        N(8, Octave::Contra, NoteOffset::A),
        N(16, Octave::Contra, NoteOffset::A),
        N(16, Octave::Contra, NoteOffset::A),
        N(16, Octave::Contra, NoteOffset::As ),
        N(8, Octave::Contra, NoteOffset::B),
        // 10
        N(8, Octave::Contra, NoteOffset::B),
        N(8, Octave::Great, NoteOffset::D),
        N(16, Octave::Great, NoteOffset::E),
        N(8, Octave::Great, NoteOffset::F),
        N(8, Octave::Great, NoteOffset::Fs),
        N(8, Octave::Great, NoteOffset::A),
        N(8, Octave::Great, NoteOffset::Fs),
        N(8, Octave::Great, NoteOffset::A),
        N(8, Octave::Great, NoteOffset::As),
        // 11
        N(8, Octave::Great, NoteOffset::B),
        N(8, Octave::Great, NoteOffset::As),
        N(16, Octave::Great, NoteOffset::A),
        N(8, Octave::Great, NoteOffset::Fs),
        N(8, Octave::Great, NoteOffset::E),
        N(8, Octave::Contra, NoteOffset::A),
        N(16, Octave::Contra, NoteOffset::A),
        N(16, Octave::Contra, NoteOffset::A),
        N(16, Octave::Contra, NoteOffset::As ),
        N(8, Octave::Contra, NoteOffset::B),
        // 12
        N(8, Octave::Contra, NoteOffset::B),
        N(8, Octave::Great, NoteOffset::D),
        N(16, Octave::Great, NoteOffset::E),
        N(8, Octave::Great, NoteOffset::F),
        N(8, Octave::Great, NoteOffset::Fs),
        N(8, Octave::Great, NoteOffset::A),
        N(8, Octave::Great, NoteOffset::Fs),
        N(8, Octave::Great, NoteOffset::A),
        N(8, Octave::Great, NoteOffset::As),
        // 13
        N(8, Octave::Great, NoteOffset::B),
        N(8, Octave::Great, NoteOffset::As),
        N(16, Octave::Great, NoteOffset::A),
        N(8, Octave::Great, NoteOffset::Fs),
        N(8, Octave::Great, NoteOffset::E),
        N(8, Octave::Contra, NoteOffset::A),
        N(16, Octave::Contra, NoteOffset::A),
        N(16, Octave::Contra, NoteOffset::A),
        N(16, Octave::Contra, NoteOffset::As ),
        N(8, Octave::Contra, NoteOffset::B),
        // 14
        N(8, Octave::Contra, NoteOffset::B),
        N(8, Octave::Great, NoteOffset::D),
        N(16, Octave::Great, NoteOffset::E),
        N(8, Octave::Great, NoteOffset::F),
        N(8, Octave::Great, NoteOffset::Fs),
        N(8, Octave::Great, NoteOffset::A),
        N(8, Octave::Great, NoteOffset::Fs),
        N(8, Octave::Great, NoteOffset::A),
        N(8, Octave::Great, NoteOffset::As),
        // 15
        N(8, Octave::Great, NoteOffset::B),
        N(8, Octave::Great, NoteOffset::As),
        N(16, Octave::Great, NoteOffset::A),
        N(8, Octave::Great, NoteOffset::Fs),
        N(8, Octave::Great, NoteOffset::E),
        N(8, Octave::Contra, NoteOffset::A),
        N(16, Octave::Contra, NoteOffset::A),
        N(16, Octave::Contra, NoteOffset::A),
        N(16, Octave::Contra, NoteOffset::As ),
        N(8, Octave::Contra, NoteOffset::B),
        // 16
        N(8, Octave::Contra, NoteOffset::B),
        N(8, Octave::Great, NoteOffset::D),
        N(16, Octave::Great, NoteOffset::E),
        N(8, Octave::Great, NoteOffset::F),
        N(8, Octave::Great, NoteOffset::Fs),
        N(8, Octave::Great, NoteOffset::A),
        N(8, Octave::Great, NoteOffset::Fs),
        N(8, Octave::Great, NoteOffset::A),
        N(8, Octave::Great, NoteOffset::As),
        // 17
        N(8, Octave::Great, NoteOffset::B),
        N(8, Octave::Great, NoteOffset::As),
        N(16, Octave::Great, NoteOffset::A),
        N(8, Octave::Great, NoteOffset::Fs),
        N(8, Octave::Great, NoteOffset::E),
        N(8, Octave::Contra, NoteOffset::A),
        N(16, Octave::Contra, NoteOffset::A),
        N(16, Octave::Contra, NoteOffset::A),
        N(16, Octave::Contra, NoteOffset::As ),
        N(8, Octave::Contra, NoteOffset::B),
        // 18
        N(8, Octave::Contra, NoteOffset::B),
        N(8, Octave::Great, NoteOffset::D),
        N(16, Octave::Great, NoteOffset::E),
        N(8, Octave::Great, NoteOffset::F),
        N(8, Octave::Great, NoteOffset::Fs),
        N(8, Octave::Great, NoteOffset::A),
        N(8, Octave::Great, NoteOffset::Fs),
        N(8, Octave::Great, NoteOffset::A),
        N(8, Octave::Great, NoteOffset::As),
        // 19
        N(8, Octave::Great, NoteOffset::B),
        N(8, Octave::Great, NoteOffset::As),
        N(16, Octave::Great, NoteOffset::A),
        N(8, Octave::Great, NoteOffset::Fs),
        N(8, Octave::Great, NoteOffset::E),
        N(8, Octave::Contra, NoteOffset::A),
        N(16, Octave::Contra, NoteOffset::A),
        N(16, Octave::Contra, NoteOffset::A),
        N(16, Octave::Contra, NoteOffset::As ),
        N(8, Octave::Contra, NoteOffset::B),
        // 20
        N(8, Octave::Contra, NoteOffset::B),
        N(8, Octave::Great, NoteOffset::D),
        N(16, Octave::Great, NoteOffset::E),
        N(8, Octave::Great, NoteOffset::F),
        N(8, Octave::Great, NoteOffset::Fs),
        N(8, Octave::Great, NoteOffset::A),
        N(8, Octave::Great, NoteOffset::Fs),
        N(8, Octave::Great, NoteOffset::A),
        N(8, Octave::Great, NoteOffset::As),
        // 21
        N(8, Octave::Great, NoteOffset::B),
        N(8, Octave::Great, NoteOffset::As),
        N(16, Octave::Great, NoteOffset::A),
        N(8, Octave::Great, NoteOffset::Fs),
        N(8, Octave::Great, NoteOffset::E),
        N(8, Octave::Contra, NoteOffset::A),
        N(16, Octave::Contra, NoteOffset::A),
        N(16, Octave::Contra, NoteOffset::A),
        N(16, Octave::Contra, NoteOffset::As ),
        N(8, Octave::Contra, NoteOffset::B),
        // 22

    };
   
    Sheet bottomSheet = {
        0, 0, bottomNoteArray, sizeof(bottomNoteArray) / sizeof(N), false
    };
    Sheet* sheetArray = new Sheet[2]{bottomSheet, topSheet};


    GiornoArrangement* arrangement = new GiornoArrangement();
    arrangement->sheetArray = sheetArray;
    arrangement->sheetCount = 2;

    return arrangement;
}
#endif // BADAPPLE_H