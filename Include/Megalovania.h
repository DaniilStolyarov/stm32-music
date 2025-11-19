#ifndef MEGALOVANIA_H
#define MEGALOVANIA_H
#include "Include/NoteDef.h"
#include "Include/SheetNote.h"
#include "Include/SheetPlayer.h"

typedef struct MegalovaniaArrangement
{
    int sheetCount;
    Sheet* sheetArray;
};
MegalovaniaArrangement* megalovaniaSong()
{
    using N = SheetNote;
    static SheetNote topNoteArray[] = 
    {
        N(16, Octave::Small, NoteOffset::D),
        N(16, Octave::Small, NoteOffset::D),
        N(8, Octave::One, NoteOffset::D),
        N(8, Octave::Small, NoteOffset::A),
        N(16),
        N(16, Octave::Small, NoteOffset::Gs),
        N(16),
        N(16, Octave::Small, NoteOffset::G),
        N(16),
        N(8, Octave::Small, NoteOffset::F),
        N(16, Octave::Small, NoteOffset::D),
        N(16, Octave::Small, NoteOffset::F),
        N(16, Octave::Small, NoteOffset::G),
        
        N(16, Octave::Small, NoteOffset::C),
        N(16, Octave::Small, NoteOffset::C),
        N(8, Octave::One, NoteOffset::D),
        N(8, Octave::Small, NoteOffset::A),
        N(16),
        N(16, Octave::Small, NoteOffset::Gs),
        N(16),
        N(16, Octave::Small, NoteOffset::G),
        N(16),
        N(8, Octave::Small, NoteOffset::F),
        N(16, Octave::Small, NoteOffset::D),
        N(16, Octave::Small, NoteOffset::F),
        N(16, Octave::Small, NoteOffset::G),

        N(16, Octave::Great, NoteOffset::B),
        N(16, Octave::Great, NoteOffset::B),
        N(8, Octave::One, NoteOffset::D),
        N(8, Octave::Small, NoteOffset::A),
        N(16),
        N(16, Octave::Small, NoteOffset::Gs),
        N(16),
        N(16, Octave::Small, NoteOffset::G),
        N(16),
        N(8, Octave::Small, NoteOffset::F),
        N(16, Octave::Small, NoteOffset::D),
        N(16, Octave::Small, NoteOffset::F),
        N(16, Octave::Small, NoteOffset::G),

        N(16, Octave::Great, NoteOffset::As),
        N(16, Octave::Great, NoteOffset::As),
        N(8, Octave::One, NoteOffset::D),
        N(8, Octave::Small, NoteOffset::A),
        N(16),
        N(16, Octave::Small, NoteOffset::Gs),
        N(16),
        N(16, Octave::Small, NoteOffset::G),
        N(16),
        N(8, Octave::Small, NoteOffset::F),
        N(16, Octave::Small, NoteOffset::D),
        N(16, Octave::Small, NoteOffset::F),
        N(16, Octave::Small, NoteOffset::G),
    };
    Sheet topSheet = {
        0, 0, topNoteArray, sizeof(topNoteArray) / sizeof(N)
    };


    // ___________________
    static SheetNote bottomNoteArray[]
    {
        N(8, Octave::Small, NoteOffset::D),
        N(8, Octave::One, NoteOffset::D),
        N(8, Octave::Small, NoteOffset::D),
        N(16, Octave::One, NoteOffset::D),
        N(8, Octave::Small, NoteOffset::D),
        N(16, Octave::Small, NoteOffset::D),
        N(16, Octave::One, NoteOffset::D),
        N(16, Octave::Small, NoteOffset::D),
        N(16, Octave::Small, NoteOffset::D),
        N(16, Octave::Small, NoteOffset::D),
        N(8, Octave::One, NoteOffset::D),

        N(8, Octave::Small, NoteOffset::C),
        N(8, Octave::One, NoteOffset::C),
        N(8, Octave::Small, NoteOffset::C),
        N(16, Octave::One, NoteOffset::C),
        N(8, Octave::Small, NoteOffset::C),
        N(16, Octave::Small, NoteOffset::C),
        N(16, Octave::One, NoteOffset::C),
        N(16, Octave::Small, NoteOffset::C),
        N(16, Octave::Small, NoteOffset::C),
        N(16, Octave::Small, NoteOffset::C),
        N(8, Octave::One, NoteOffset::C),

        N(8, Octave::Great, NoteOffset::B),
        N(8, Octave::Small, NoteOffset::B),
        N(8, Octave::Great, NoteOffset::B),
        N(16, Octave::Small, NoteOffset::B),
        N(8, Octave::Great, NoteOffset::B),
        N(16, Octave::Great, NoteOffset::B),
        N(16, Octave::Small, NoteOffset::B),
        N(16, Octave::Great, NoteOffset::B),
        N(16, Octave::Great, NoteOffset::B),
        N(16, Octave::Great, NoteOffset::B),
        N(8, Octave::Small, NoteOffset::B),

        N(8, Octave::Great, NoteOffset::As),
        N(8, Octave::Small, NoteOffset::As),
        N(8, Octave::Great, NoteOffset::As),
        N(16, Octave::Small, NoteOffset::As),
        N(8, Octave::Small, NoteOffset::C),
        N(16, Octave::Small, NoteOffset::C),
        N(16, Octave::One, NoteOffset::C),
        N(16, Octave::Small, NoteOffset::C),
        N(16, Octave::Small, NoteOffset::C),
        N(16, Octave::Small, NoteOffset::C),
        N(8, Octave::One, NoteOffset::C),
    };
   
    Sheet bottomSheet = {
        0, 0, bottomNoteArray, sizeof(bottomNoteArray) / sizeof(N)
    };
    Sheet* sheetArray = new Sheet[2]{bottomSheet, topSheet};


    MegalovaniaArrangement* arrangement = new MegalovaniaArrangement();
    arrangement->sheetArray = sheetArray;
    arrangement->sheetCount = 2;

    return arrangement;
}
#endif