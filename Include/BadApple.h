#ifndef BADAPPLE_H
#define BADAPPLE_H
#include "Include/NoteDef.h"
#include "Include/SheetNote.h"
#include "Include/SheetPlayer.h"

typedef struct BadAppleArrangement
{
    int sheetCount;
    Sheet* sheetArray;
};
BadAppleArrangement* BadAppleSong()
{
    using N = SheetNote;
    static const SheetNote topNoteArray[] =
        {
            N(8, Octave::Great, NoteOffset::Ds),
            N(16, Octave::Great, NoteOffset::Ds), 
            N(8, Octave::Small, NoteOffset::Ds),
            N(16, Octave::Small, NoteOffset::Ds),
            N(16, Octave::Small, NoteOffset::Cs),
            N(16, Octave::Small, NoteOffset::Ds),
            N(8, Octave::Great, NoteOffset::Ds),
            N(16, Octave::Great, NoteOffset::Ds),
            N(8, Octave::Small, NoteOffset::Ds),
            N(16, Octave::Small, NoteOffset::Ds),
            N(16, Octave::Small, NoteOffset::Cs),
            N(16, Octave::Small, NoteOffset::Ds), // 1

            N(8, Octave::Great, NoteOffset::Ds),
            N(16, Octave::Great, NoteOffset::Ds),
            N(8, Octave::Small, NoteOffset::Ds),
            N(16, Octave::Small, NoteOffset::Ds),
            N(16, Octave::Small, NoteOffset::Cs),
            N(16, Octave::Small, NoteOffset::Ds),
            N(8, Octave::Great, NoteOffset::Ds),
            N(16, Octave::Small, NoteOffset::Ds),
            N(16, Octave::Small, NoteOffset::Fs),
            N(8, Octave::Great, NoteOffset::Fs),
            N(16, Octave::Small, NoteOffset::Fs),
            N(16, Octave::Small, NoteOffset::Gs), // 2

            N(8, Octave::Great, NoteOffset::Ds),
            N(16, Octave::Great, NoteOffset::Ds),
            N(8, Octave::Small, NoteOffset::Ds),
            N(16, Octave::Small, NoteOffset::Ds),
            N(16, Octave::Small, NoteOffset::Cs),
            N(16, Octave::Small, NoteOffset::Ds),
            N(8, Octave::Great, NoteOffset::Ds),
            N(16, Octave::Great, NoteOffset::Ds),
            N(8, Octave::Small, NoteOffset::Ds),
            N(16, Octave::Small, NoteOffset::Ds),
            N(16, Octave::Small, NoteOffset::Cs),
            N(16, Octave::Small, NoteOffset::Ds), // 3

            N(8, Octave::Great, NoteOffset::Ds),
            N(16, Octave::Great, NoteOffset::Ds),
            N(8, Octave::Small, NoteOffset::Ds),
            N(16, Octave::Small, NoteOffset::Ds),
            N(16, Octave::Small, NoteOffset::Cs),
            N(16, Octave::Small, NoteOffset::Ds),
            N(8, Octave::Great, NoteOffset::Gs),
            N(16, Octave::Small, NoteOffset::Fs),
            N(16, Octave::Small, NoteOffset::Gs),
            N(8, Octave::Great, NoteOffset::Fs),
            N(16, Octave::Small, NoteOffset::Ds),
            N(16, Octave::Small, NoteOffset::Fs), // 4

            N(8, Octave::Great, NoteOffset::Ds),
            N(16, Octave::Great, NoteOffset::Ds),
            N(8, Octave::Small, NoteOffset::Ds),
            N(16, Octave::Small, NoteOffset::Ds),
            N(16, Octave::Small, NoteOffset::Cs),
            N(16, Octave::Small, NoteOffset::Ds),
            N(8, Octave::Great, NoteOffset::Ds),
            N(16, Octave::Great, NoteOffset::Ds),
            N(8, Octave::Small, NoteOffset::Ds),
            N(16, Octave::Small, NoteOffset::Ds),
            N(16, Octave::Small, NoteOffset::Cs),
            N(16, Octave::Small, NoteOffset::Ds), // 5

            N(8, Octave::Great, NoteOffset::Ds),
            N(16, Octave::Great, NoteOffset::Ds),
            N(8, Octave::Small, NoteOffset::Ds),
            N(16, Octave::Small, NoteOffset::Ds),
            N(16, Octave::Small, NoteOffset::Cs),
            N(16, Octave::Small, NoteOffset::Ds),
            N(8, Octave::Great, NoteOffset::Ds),
            N(16, Octave::Small, NoteOffset::Ds),
            N(16, Octave::Small, NoteOffset::Fs),
            N(8, Octave::Great, NoteOffset::Fs),
            N(16, Octave::Small, NoteOffset::Fs),
            N(16, Octave::Small, NoteOffset::Gs), // 6

            N(8, Octave::Great, NoteOffset::Ds),
            N(16, Octave::Great, NoteOffset::Ds),
            N(8, Octave::Small, NoteOffset::Ds),
            N(16, Octave::Small, NoteOffset::Ds),
            N(16, Octave::Small, NoteOffset::Cs),
            N(16, Octave::Small, NoteOffset::Ds),
            N(8, Octave::Great, NoteOffset::Ds),
            N(16, Octave::Great, NoteOffset::Ds),
            N(8, Octave::Small, NoteOffset::Ds),
            N(16, Octave::Small, NoteOffset::Ds),
            N(16, Octave::Small, NoteOffset::Cs),
            N(16, Octave::Small, NoteOffset::Ds), // 7

            N(8, Octave::Great, NoteOffset::Ds),
            N(16, Octave::Great, NoteOffset::Ds),
            N(8, Octave::Small, NoteOffset::Ds),
            N(16, Octave::Small, NoteOffset::Ds),
            N(16, Octave::Small, NoteOffset::Cs),
            N(16, Octave::Small, NoteOffset::Ds),
            N(8, Octave::Great, NoteOffset::Gs),
            N(16, Octave::Small, NoteOffset::Fs),
            N(16, Octave::Small, NoteOffset::Gs),
            N(8, Octave::Great, NoteOffset::Fs),
            N(16, Octave::Small, NoteOffset::Ds),
            N(16, Octave::Small, NoteOffset::Fs), // 8

            N(8, Octave::Small, NoteOffset::Ds),
            N(8, Octave::Small, NoteOffset::F),
            N(8, Octave::Small, NoteOffset::Fs),
            N(8, Octave::Small, NoteOffset::Gs),
            N(4, Octave::Small, NoteOffset::As),
            N(8, Octave::One, NoteOffset::Ds),
            N(8, Octave::One, NoteOffset::Cs), // 9

            N(4, Octave::Small, NoteOffset::As),
            N(4, Octave::Small, NoteOffset::Ds),
            N(8, Octave::Small, NoteOffset::As),
            N(8, Octave::Small, NoteOffset::Gs),
            N(8, Octave::Small, NoteOffset::Fs),
            N(8, Octave::Small, NoteOffset::F), // 10

            N(8, Octave::Small, NoteOffset::Ds),
            N(8, Octave::Small, NoteOffset::F),
            N(8, Octave::Small, NoteOffset::Fs),
            N(8, Octave::Small, NoteOffset::Gs),
            N(4, Octave::Small, NoteOffset::As),
            N(8, Octave::One, NoteOffset::Gs),
            N(8, Octave::One, NoteOffset::Fs), // 11

            N(8, Octave::Small, NoteOffset::F),
            N(8, Octave::Small, NoteOffset::Ds),
            N(8, Octave::Small, NoteOffset::F),
            N(8, Octave::Small, NoteOffset::Fs),
            N(8, Octave::Small, NoteOffset::F),
            N(8, Octave::Small, NoteOffset::Ds),
            N(8, Octave::Small, NoteOffset::D),
            N(8, Octave::Small, NoteOffset::F), // 12

            N(8, Octave::Small, NoteOffset::Ds),
            N(8, Octave::Small, NoteOffset::F),
            N(8, Octave::Small, NoteOffset::Fs),
            N(8, Octave::Small, NoteOffset::Gs),
            N(4, Octave::Small, NoteOffset::As),
            N(8, Octave::One, NoteOffset::Ds),
            N(8, Octave::One, NoteOffset::Cs), // 13

            N(4, Octave::Small, NoteOffset::As),
            N(4, Octave::Small, NoteOffset::Ds),
            N(8, Octave::Small, NoteOffset::As),
            N(8, Octave::Small, NoteOffset::Gs),
            N(8, Octave::Small, NoteOffset::Fs),
            N(8, Octave::Small, NoteOffset::F), // 14

            N(8, Octave::Small, NoteOffset::Ds),
            N(8, Octave::Small, NoteOffset::F),
            N(8, Octave::Small, NoteOffset::Fs),
            N(8, Octave::Small, NoteOffset::Gs),
            N(4, Octave::Small, NoteOffset::As),
            N(8, Octave::One, NoteOffset::Gs),
            N(8, Octave::One, NoteOffset::Fs), // 15

            N(4, Octave::Small, NoteOffset::F),
            N(4, Octave::Small, NoteOffset::Fs),
            N(4, Octave::Small, NoteOffset::Gs),
            N(4, Octave::Small, NoteOffset::As), // 16

            N(8, Octave::Small, NoteOffset::Ds),
            N(8, Octave::Small, NoteOffset::F),
            N(8, Octave::Small, NoteOffset::Fs),
            N(8, Octave::Small, NoteOffset::Gs),
            N(4, Octave::Small, NoteOffset::As),
            N(8, Octave::One, NoteOffset::Ds),
            N(8, Octave::One, NoteOffset::Cs), // 17

            N(4, Octave::Small, NoteOffset::As),
            N(4, Octave::Small, NoteOffset::Ds),
            N(8, Octave::Small, NoteOffset::As),
            N(8, Octave::Small, NoteOffset::Gs),
            N(8, Octave::Small, NoteOffset::Fs),
            N(8, Octave::Small, NoteOffset::F), // 18

            N(8, Octave::Small, NoteOffset::Ds),
            N(8, Octave::Small, NoteOffset::F),
            N(8, Octave::Small, NoteOffset::Fs),
            N(8, Octave::Small, NoteOffset::Gs),
            N(4, Octave::Small, NoteOffset::As),
            N(8, Octave::One, NoteOffset::Gs),
            N(8, Octave::One, NoteOffset::Fs), // 19

            N(8, Octave::Small, NoteOffset::F),
            N(8, Octave::Small, NoteOffset::Ds),
            N(8, Octave::Small, NoteOffset::F),
            N(8, Octave::Small, NoteOffset::Fs),
            N(8, Octave::Small, NoteOffset::F),
            N(8, Octave::Small, NoteOffset::Ds),
            N(8, Octave::Small, NoteOffset::D),
            N(8, Octave::Small, NoteOffset::F), // 20

            N(8, Octave::Small, NoteOffset::Ds),
            N(8, Octave::Small, NoteOffset::F),
            N(8, Octave::Small, NoteOffset::Fs),
            N(8, Octave::Small, NoteOffset::Gs),
            N(4, Octave::Small, NoteOffset::As),
            N(8, Octave::One, NoteOffset::Ds),
            N(8, Octave::One, NoteOffset::Cs), // 21

            N(4, Octave::Small, NoteOffset::As),
            N(4, Octave::Small, NoteOffset::Ds),
            N(8, Octave::Small, NoteOffset::As),
            N(8, Octave::Small, NoteOffset::Gs),
            N(8, Octave::Small, NoteOffset::Fs),
            N(8, Octave::Small, NoteOffset::F), // 22

            N(8, Octave::Small, NoteOffset::Ds),
            N(8, Octave::Small, NoteOffset::F),
            N(8, Octave::Small, NoteOffset::Fs),
            N(8, Octave::Small, NoteOffset::Gs),
            N(4, Octave::Small, NoteOffset::As),
            N(8, Octave::One, NoteOffset::Gs),
            N(8, Octave::One, NoteOffset::Fs), // 23

            N(4, Octave::Small, NoteOffset::F),
            N(4, Octave::Small, NoteOffset::Fs),
            N(4, Octave::Small, NoteOffset::Gs),
            N(4, Octave::Small, NoteOffset::As), // 24

            N(8, Octave::One, NoteOffset::Cs), 
            N(8, Octave::One, NoteOffset::Ds),
            N(8, Octave::Small, NoteOffset::As),
            N(8, Octave::Small, NoteOffset::Gs),
            N(4, Octave::Small, NoteOffset::As),
            N(8, Octave::Small, NoteOffset::Gs),
            N(8, Octave::Small, NoteOffset::As), // 25

            N(8, Octave::One, NoteOffset::Cs),
            N(8, Octave::One, NoteOffset::Ds),
            N(8, Octave::Small, NoteOffset::As),
            N(8, Octave::Small, NoteOffset::Gs),
            N(4, Octave::Small, NoteOffset::As),
            N(8, Octave::Small, NoteOffset::Gs),
            N(8, Octave::Small, NoteOffset::As), // 26

            N(8, Octave::Small, NoteOffset::Gs),
            N(8, Octave::Small, NoteOffset::Fs),
            N(8, Octave::Small, NoteOffset::F),
            N(8, Octave::Small, NoteOffset::Cs),
            N(4, Octave::Small, NoteOffset::Ds),
            N(8, Octave::Small, NoteOffset::Cs),
            N(8, Octave::Small, NoteOffset::Ds), // 27

            N(8, Octave::Small, NoteOffset::F),
            N(8, Octave::Small, NoteOffset::Fs),
            N(8, Octave::Small, NoteOffset::Gs),
            N(8, Octave::Small, NoteOffset::As),
            N(4, Octave::Small, NoteOffset::Ds), // 28
            N(8, Octave::Small, NoteOffset::As),
            N(8, Octave::Small, NoteOffset::Cs),


            N(8, Octave::One, NoteOffset::Cs), 
            N(8, Octave::One, NoteOffset::Ds),
            N(8, Octave::Small, NoteOffset::As),
            N(8, Octave::Small, NoteOffset::Gs),
            N(4, Octave::Small, NoteOffset::As),
            N(8, Octave::Small, NoteOffset::Gs),
            N(8, Octave::Small, NoteOffset::As), // 29

            N(8, Octave::One, NoteOffset::Cs),
            N(8, Octave::One, NoteOffset::Ds),
            N(8, Octave::Small, NoteOffset::As),
            N(8, Octave::Small, NoteOffset::Gs),
            N(4, Octave::Small, NoteOffset::As),
            N(8, Octave::Small, NoteOffset::Gs),
            N(8, Octave::Small, NoteOffset::As), // 30

            N(8, Octave::Small, NoteOffset::Gs),
            N(8, Octave::Small, NoteOffset::Fs),
            N(8, Octave::Small, NoteOffset::F),
            N(8, Octave::Small, NoteOffset::Cs),
            N(4, Octave::Small, NoteOffset::Ds),
            N(8, Octave::Small, NoteOffset::Cs),
            N(8, Octave::Small, NoteOffset::Ds), // 31

            N(8, Octave::Small, NoteOffset::F),
            N(8, Octave::Small, NoteOffset::Fs),
            N(8, Octave::Small, NoteOffset::Gs),
            N(8, Octave::Small, NoteOffset::As),
            N(4, Octave::Small, NoteOffset::Cs), // 32
            N(8, Octave::Small, NoteOffset::As),
            N(8, Octave::Small, NoteOffset::Cs),

            N(8, Octave::One, NoteOffset::Cs), 
            N(8, Octave::One, NoteOffset::Ds),
            N(8, Octave::Small, NoteOffset::As),
            N(8, Octave::Small, NoteOffset::Gs),
            N(4, Octave::Small, NoteOffset::As),
            N(8, Octave::Small, NoteOffset::Gs),
            N(8, Octave::Small, NoteOffset::As), // 33

            N(8, Octave::One, NoteOffset::Cs),
            N(8, Octave::One, NoteOffset::Ds),
            N(8, Octave::Small, NoteOffset::As),
            N(8, Octave::Small, NoteOffset::Gs),
            N(4, Octave::Small, NoteOffset::As),
            N(8, Octave::Small, NoteOffset::Gs),
            N(8, Octave::Small, NoteOffset::As), // 34

            N(8, Octave::Small, NoteOffset::Gs),
            N(8, Octave::Small, NoteOffset::Fs),
            N(8, Octave::Small, NoteOffset::F),
            N(8, Octave::Small, NoteOffset::Cs),
            N(4, Octave::Small, NoteOffset::Ds),
            N(8, Octave::Small, NoteOffset::Cs),
            N(8, Octave::Small, NoteOffset::Ds), // 35

            N(8, Octave::Small, NoteOffset::F),
            N(8, Octave::Small, NoteOffset::Fs),
            N(8, Octave::Small, NoteOffset::Gs),
            N(8, Octave::Small, NoteOffset::As),
            N(4, Octave::Small, NoteOffset::Cs),
            N(8, Octave::Small, NoteOffset::As),
            N(8, Octave::Small, NoteOffset::Cs), // 36

            N(8, Octave::One, NoteOffset::Cs), 
            N(8, Octave::One, NoteOffset::Ds),
            N(8, Octave::Small, NoteOffset::As),
            N(8, Octave::Small, NoteOffset::Gs),
            N(4, Octave::Small, NoteOffset::As),
            N(8, Octave::Small, NoteOffset::Gs),
            N(8, Octave::Small, NoteOffset::As), // 37

            N(8, Octave::One, NoteOffset::Cs),
            N(8, Octave::One, NoteOffset::Ds),
            N(8, Octave::Small, NoteOffset::As),
            N(8, Octave::Small, NoteOffset::Gs),
            N(4, Octave::Small, NoteOffset::As),
            N(8, Octave::One, NoteOffset::Ds),
            N(8, Octave::One, NoteOffset::F), // 38

            N(8, Octave::One, NoteOffset::Fs),
            N(8, Octave::One, NoteOffset::F),
            N(8, Octave::One, NoteOffset::Ds),
            N(8, Octave::One, NoteOffset::Cs),
            N(4, Octave::Small, NoteOffset::As),
            N(8, Octave::Small, NoteOffset::Gs),
            N(8, Octave::Small, NoteOffset::As), // 39

            N(8, Octave::Small, NoteOffset::Gs),
            N(8, Octave::Small, NoteOffset::Fs),
            N(8, Octave::Small, NoteOffset::F),
            N(8, Octave::Small, NoteOffset::Cs),
            N(4, Octave::Small, NoteOffset::Ds), 
            N(4), // 40

            N(8, Octave::Great, NoteOffset::Ds),
            N(16, Octave::Great, NoteOffset::Ds), 
            N(8, Octave::Small, NoteOffset::Ds),
            N(16, Octave::Small, NoteOffset::Ds),
            N(16, Octave::Small, NoteOffset::Cs),
            N(16, Octave::Small, NoteOffset::Ds),
            N(8, Octave::Great, NoteOffset::Ds),
            N(16, Octave::Great, NoteOffset::Ds),
            N(8, Octave::Small, NoteOffset::Ds),
            N(16, Octave::Small, NoteOffset::Ds),
            N(16, Octave::Small, NoteOffset::Cs),
            N(16, Octave::Small, NoteOffset::Ds), // 41

            N(8, Octave::Great, NoteOffset::Ds),
            N(16, Octave::Great, NoteOffset::Ds),
            N(8, Octave::Small, NoteOffset::Ds),
            N(16, Octave::Small, NoteOffset::Ds),
            N(16, Octave::Small, NoteOffset::Cs),
            N(16, Octave::Small, NoteOffset::Ds),
            N(8, Octave::Great, NoteOffset::Ds),
            N(16, Octave::Small, NoteOffset::Ds),
            N(16, Octave::Small, NoteOffset::Fs),
            N(8, Octave::Great, NoteOffset::Fs),
            N(16, Octave::Small, NoteOffset::Fs),
            N(16, Octave::Small, NoteOffset::Gs), // 42

            N(8, Octave::Great, NoteOffset::Ds),
            N(16, Octave::Great, NoteOffset::Ds),
            N(8, Octave::Small, NoteOffset::Ds),
            N(16, Octave::Small, NoteOffset::Ds),
            N(16, Octave::Small, NoteOffset::Cs),
            N(16, Octave::Small, NoteOffset::Ds),
            N(8, Octave::Great, NoteOffset::Ds),
            N(16, Octave::Great, NoteOffset::Ds),
            N(8, Octave::Small, NoteOffset::Ds),
            N(16, Octave::Small, NoteOffset::Ds),
            N(16, Octave::Small, NoteOffset::Cs),
            N(16, Octave::Small, NoteOffset::Ds), // 43

            N(8, Octave::Great, NoteOffset::Ds),
            N(16, Octave::Great, NoteOffset::Ds),
            N(8, Octave::Small, NoteOffset::Ds),
            N(16, Octave::Small, NoteOffset::Ds),
            N(16, Octave::Small, NoteOffset::Cs),
            N(16, Octave::Small, NoteOffset::Ds),
            N(8, Octave::Great, NoteOffset::Gs),
            N(16, Octave::Small, NoteOffset::Fs),
            N(16, Octave::Small, NoteOffset::Gs),
            N(8, Octave::Great, NoteOffset::Fs),
            N(16, Octave::Small, NoteOffset::Ds),
            N(16, Octave::Small, NoteOffset::Fs), // 44

            N(8, Octave::Great, NoteOffset::Ds),
            N(16, Octave::Great, NoteOffset::Ds),
            N(8, Octave::Small, NoteOffset::Ds),
            N(16, Octave::Small, NoteOffset::Ds),
            N(16, Octave::Small, NoteOffset::Cs),
            N(16, Octave::Small, NoteOffset::Ds),
            N(8, Octave::Great, NoteOffset::Ds),
            N(16, Octave::Great, NoteOffset::Ds),
            N(8, Octave::Small, NoteOffset::Ds),
            N(16, Octave::Small, NoteOffset::Ds),
            N(16, Octave::Small, NoteOffset::Cs),
            N(16, Octave::Small, NoteOffset::Ds), // 45

            N(8, Octave::Great, NoteOffset::Ds),
            N(16, Octave::Great, NoteOffset::Ds),
            N(8, Octave::Small, NoteOffset::Ds),
            N(16, Octave::Small, NoteOffset::Ds),
            N(16, Octave::Small, NoteOffset::Cs),
            N(16, Octave::Small, NoteOffset::Ds),
            N(8, Octave::Great, NoteOffset::Ds),
            N(16, Octave::Small, NoteOffset::Ds),
            N(16, Octave::Small, NoteOffset::Fs),
            N(8, Octave::Great, NoteOffset::Fs),
            N(16, Octave::Small, NoteOffset::Fs),
            N(16, Octave::Small, NoteOffset::Gs), // 46

            N(8, Octave::Great, NoteOffset::Ds),
            N(16, Octave::Great, NoteOffset::Ds),
            N(8, Octave::Small, NoteOffset::Ds),
            N(16, Octave::Small, NoteOffset::Ds),
            N(16, Octave::Small, NoteOffset::Cs),
            N(16, Octave::Small, NoteOffset::Ds),
            N(8, Octave::Great, NoteOffset::Ds),
            N(16, Octave::Great, NoteOffset::Ds),
            N(8, Octave::Small, NoteOffset::Ds),
            N(16, Octave::Small, NoteOffset::Ds),
            N(16, Octave::Small, NoteOffset::Cs),
            N(16, Octave::Small, NoteOffset::Ds), // 47

            N(8, Octave::Great, NoteOffset::Ds),
            N(16, Octave::Great, NoteOffset::Ds),
            N(8, Octave::Small, NoteOffset::Ds),
            N(16, Octave::Small, NoteOffset::Ds),
            N(16, Octave::Small, NoteOffset::Cs),
            N(16, Octave::Small, NoteOffset::Ds),
            N(8, Octave::Great, NoteOffset::Gs),
            N(16, Octave::Small, NoteOffset::Fs),
            N(16, Octave::Small, NoteOffset::Gs),
            N(8, Octave::Great, NoteOffset::Fs),
            N(16, Octave::Small, NoteOffset::Ds),
            N(16, Octave::Small, NoteOffset::Fs), // 48
            
            N(1, Octave::Small, NoteOffset::Ds) // 49

        };
    Sheet topSheet = {
        0, 0, topNoteArray, sizeof(topNoteArray) / sizeof(N), false
    };

    // ___________________
    static const SheetNote bottomNoteArray[]
    {
        N(1), // 1
        N(1), // 2
        N(1), // 3
        N(1), // 4

        N(8, Octave::Contra, NoteOffset::Ds),
        N(16, Octave::Contra, NoteOffset::Ds),
        N(8, Octave::Great, NoteOffset::As),
        N(16, Octave::Great, NoteOffset::As),
        N(8),
        N(8, Octave::Contra, NoteOffset::Ds),
        N(16, Octave::Contra, NoteOffset::Ds),
        N(8, Octave::Great, NoteOffset::As),
        N(16, Octave::Great, NoteOffset::As),
        N(8), // 5

        N(8, Octave::Contra, NoteOffset::Ds),
        N(16, Octave::Contra, NoteOffset::Ds),
        N(8, Octave::Great, NoteOffset::As),
        N(16, Octave::Great, NoteOffset::As),
        N(8),
        N(8, Octave::Contra, NoteOffset::Ds),
        N(8),
        N(8, Octave::Contra, NoteOffset::Fs),
        N(8), // 6

        N(8, Octave::Contra, NoteOffset::Ds),
        N(16, Octave::Contra, NoteOffset::Ds),
        N(8, Octave::Great, NoteOffset::As),
        N(16, Octave::Great, NoteOffset::As),
        N(8),
        N(8, Octave::Contra, NoteOffset::Ds),
        N(16, Octave::Contra, NoteOffset::Ds),
        N(8, Octave::Great, NoteOffset::As),
        N(16, Octave::Great, NoteOffset::As),
        N(8), // 7 

        N(8, Octave::Contra, NoteOffset::Ds),
        N(16, Octave::Contra, NoteOffset::Ds),
        N(8, Octave::Great, NoteOffset::As),
        N(16, Octave::Great, NoteOffset::As),
        N(8),
        N(8, Octave::Contra, NoteOffset::Gs),
        N(8),
        N(8, Octave::Contra, NoteOffset::Fs),
        N(8), // 8

        N(8, Octave::Great, NoteOffset::Ds),
        N(8, Octave::Great, NoteOffset::As),
        N(8, Octave::Small, NoteOffset::Ds),
        N(8, Octave::Great, NoteOffset::As),
        N(8, Octave::Great, NoteOffset::Ds),
        N(8, Octave::Great, NoteOffset::As),
        N(8, Octave::Small, NoteOffset::Ds),
        N(8, Octave::Great, NoteOffset::As), // 9

        N(8, Octave::Great, NoteOffset::Ds),
        N(8, Octave::Great, NoteOffset::As),
        N(8, Octave::Small, NoteOffset::Ds),
        N(8, Octave::Great, NoteOffset::As),
        N(8, Octave::Great, NoteOffset::Ds),
        N(8, Octave::Great, NoteOffset::As),
        N(8, Octave::Small, NoteOffset::Ds),
        N(8, Octave::Great, NoteOffset::As), // 10

        N(8, Octave::Great, NoteOffset::B),
        N(8, Octave::Great, NoteOffset::Fs),
        N(8, Octave::Small, NoteOffset::B),
        N(8, Octave::Great, NoteOffset::Fs),
        N(8, Octave::Great, NoteOffset::B),
        N(8, Octave::Great, NoteOffset::Fs),
        N(8, Octave::Small, NoteOffset::B),
        N(8, Octave::Great, NoteOffset::Fs), // 11

        N(8, Octave::Great, NoteOffset::Cs),
        N(8, Octave::Great, NoteOffset::Gs),
        N(8, Octave::Small, NoteOffset::Cs),
        N(8, Octave::Great, NoteOffset::Gs),
        N(8, Octave::Great, NoteOffset::Cs),
        N(8, Octave::Great, NoteOffset::Gs),
        N(8, Octave::Small, NoteOffset::Cs),
        N(8, Octave::Great, NoteOffset::Gs), // 12

        N(8, Octave::Great, NoteOffset::Ds),
        N(8, Octave::Great, NoteOffset::As),
        N(8, Octave::Small, NoteOffset::Ds),
        N(8, Octave::Great, NoteOffset::As),
        N(8, Octave::Great, NoteOffset::Ds),
        N(8, Octave::Great, NoteOffset::As),
        N(8, Octave::Small, NoteOffset::Ds),
        N(8, Octave::Great, NoteOffset::As), // 13

        N(8, Octave::Great, NoteOffset::Ds),
        N(8, Octave::Great, NoteOffset::As),
        N(8, Octave::Small, NoteOffset::Ds),
        N(8, Octave::Great, NoteOffset::As),
        N(8, Octave::Great, NoteOffset::Ds),
        N(8, Octave::Great, NoteOffset::As),
        N(8, Octave::Small, NoteOffset::Ds),
        N(8, Octave::Great, NoteOffset::As), // 14

        N(8, Octave::Great, NoteOffset::B),
        N(8, Octave::Great, NoteOffset::Fs),
        N(8, Octave::Small, NoteOffset::B),
        N(8, Octave::Great, NoteOffset::Fs),
        N(8, Octave::Great, NoteOffset::B),
        N(8, Octave::Great, NoteOffset::Fs),
        N(8, Octave::Small, NoteOffset::B),
        N(8, Octave::Great, NoteOffset::Fs), // 15

        N(4, Octave::Great, NoteOffset::Cs),
        N(4, Octave::Great, NoteOffset::Gs),
        N(4, Octave::Small, NoteOffset::Cs),
        N(4, Octave::Great, NoteOffset::Gs), // 16

        N(8, Octave::Great, NoteOffset::Ds),
        N(8, Octave::Great, NoteOffset::As),
        N(8, Octave::Small, NoteOffset::Ds),
        N(8, Octave::Great, NoteOffset::As),
        N(8, Octave::Great, NoteOffset::Ds),
        N(8, Octave::Great, NoteOffset::As),
        N(8, Octave::Small, NoteOffset::Ds),
        N(8, Octave::Great, NoteOffset::As), // 17

        N(8, Octave::Great, NoteOffset::Ds),
        N(8, Octave::Great, NoteOffset::As),
        N(8, Octave::Small, NoteOffset::Ds),
        N(8, Octave::Great, NoteOffset::As),
        N(8, Octave::Great, NoteOffset::Ds),
        N(8, Octave::Great, NoteOffset::As),
        N(8, Octave::Small, NoteOffset::Ds),
        N(8, Octave::Great, NoteOffset::As), // 18

        N(8, Octave::Great, NoteOffset::B),
        N(8, Octave::Great, NoteOffset::Fs),
        N(8, Octave::Small, NoteOffset::B),
        N(8, Octave::Great, NoteOffset::Fs),
        N(8, Octave::Great, NoteOffset::B),
        N(8, Octave::Great, NoteOffset::Fs),
        N(8, Octave::Small, NoteOffset::B),
        N(8, Octave::Great, NoteOffset::Fs), // 19

        N(8, Octave::Great, NoteOffset::Cs),
        N(8, Octave::Great, NoteOffset::Gs),
        N(8, Octave::Small, NoteOffset::Cs),
        N(8, Octave::Great, NoteOffset::Gs),
        N(8, Octave::Great, NoteOffset::Cs),
        N(8, Octave::Great, NoteOffset::Gs),
        N(8, Octave::Small, NoteOffset::Cs),
        N(8, Octave::Great, NoteOffset::Gs), // 20

        N(8, Octave::Great, NoteOffset::Ds),
        N(8, Octave::Great, NoteOffset::As),
        N(8, Octave::Small, NoteOffset::Ds),
        N(8, Octave::Great, NoteOffset::As),
        N(8, Octave::Great, NoteOffset::Ds),
        N(8, Octave::Great, NoteOffset::As),
        N(8, Octave::Small, NoteOffset::Ds),
        N(8, Octave::Great, NoteOffset::As), // 21

        N(8, Octave::Great, NoteOffset::Ds),
        N(8, Octave::Great, NoteOffset::As),
        N(8, Octave::Small, NoteOffset::Ds),
        N(8, Octave::Great, NoteOffset::As),
        N(8, Octave::Great, NoteOffset::Ds),
        N(8, Octave::Great, NoteOffset::As),
        N(8, Octave::Small, NoteOffset::Ds),
        N(8, Octave::Great, NoteOffset::As), // 22

        N(8, Octave::Great, NoteOffset::B),
        N(8, Octave::Great, NoteOffset::Fs),
        N(8, Octave::Small, NoteOffset::B),
        N(8, Octave::Great, NoteOffset::Fs),
        N(8, Octave::Great, NoteOffset::B),
        N(8, Octave::Great, NoteOffset::Fs),
        N(8, Octave::Small, NoteOffset::B),
        N(8, Octave::Great, NoteOffset::Fs), // 23

        N(4, Octave::Great, NoteOffset::Cs),
        N(4, Octave::Great, NoteOffset::Gs),
        N(4, Octave::Small, NoteOffset::Cs),
        N(4, Octave::Great, NoteOffset::Gs), // 24

        N(8, Octave::Great, NoteOffset::B),
        N(8, Octave::Great, NoteOffset::Fs),
        N(8, Octave::Small, NoteOffset::B),
        N(8, Octave::Great, NoteOffset::Fs),
        N(8, Octave::Great, NoteOffset::B),
        N(8, Octave::Great, NoteOffset::Fs),
        N(8, Octave::Small, NoteOffset::B),
        N(8, Octave::Great, NoteOffset::Fs), // 25

        N(8, Octave::Great, NoteOffset::Cs),
        N(8, Octave::Great, NoteOffset::Gs),
        N(8, Octave::Small, NoteOffset::Cs),
        N(8, Octave::Great, NoteOffset::Gs),
        N(8, Octave::Great, NoteOffset::Cs),
        N(8, Octave::Great, NoteOffset::Gs),
        N(8, Octave::Small, NoteOffset::Cs),
        N(8, Octave::Great, NoteOffset::Gs), // 26

        N(8, Octave::Great, NoteOffset::Ds),
        N(8, Octave::Great, NoteOffset::As),
        N(8, Octave::Small, NoteOffset::Ds),
        N(8, Octave::Great, NoteOffset::As),
        N(8, Octave::Great, NoteOffset::Ds),
        N(8, Octave::Great, NoteOffset::As),
        N(8, Octave::Small, NoteOffset::Ds),
        N(8, Octave::Great, NoteOffset::As), // 27

        N(8, Octave::Great, NoteOffset::Ds),
        N(8, Octave::Great, NoteOffset::As),
        N(8, Octave::Small, NoteOffset::Ds),
        N(8, Octave::Great, NoteOffset::As),
        N(8, Octave::Great, NoteOffset::Ds),
        N(8, Octave::Great, NoteOffset::As),
        N(8, Octave::Small, NoteOffset::Ds),
        N(8, Octave::Great, NoteOffset::As), // 28

        N(8, Octave::Great, NoteOffset::B),
        N(8, Octave::Great, NoteOffset::Fs),
        N(8, Octave::Small, NoteOffset::B),
        N(8, Octave::Great, NoteOffset::Fs),
        N(8, Octave::Great, NoteOffset::B),
        N(8, Octave::Great, NoteOffset::Fs),
        N(8, Octave::Small, NoteOffset::B),
        N(8, Octave::Great, NoteOffset::Fs), // 29

        N(8, Octave::Great, NoteOffset::Cs),
        N(8, Octave::Great, NoteOffset::Gs),
        N(8, Octave::Small, NoteOffset::Cs),
        N(8, Octave::Great, NoteOffset::Gs),
        N(8, Octave::Great, NoteOffset::Cs),
        N(8, Octave::Great, NoteOffset::Gs),
        N(8, Octave::Small, NoteOffset::Cs),
        N(8, Octave::Great, NoteOffset::Gs), // 30

        N(8, Octave::Great, NoteOffset::Ds),
        N(8, Octave::Great, NoteOffset::As),
        N(8, Octave::Small, NoteOffset::Ds),
        N(8, Octave::Great, NoteOffset::As),
        N(8, Octave::Great, NoteOffset::Ds),
        N(8, Octave::Great, NoteOffset::As),
        N(8, Octave::Small, NoteOffset::Ds),
        N(8, Octave::Great, NoteOffset::As), // 31

        N(8, Octave::Great, NoteOffset::Ds),
        N(8, Octave::Great, NoteOffset::As),
        N(8, Octave::Small, NoteOffset::Ds),
        N(8, Octave::Great, NoteOffset::As),
        N(8, Octave::Great, NoteOffset::Ds),
        N(8, Octave::Great, NoteOffset::As),
        N(8, Octave::Small, NoteOffset::Ds),
        N(8, Octave::Great, NoteOffset::As), // 32

        N(8, Octave::Great, NoteOffset::B),
        N(8, Octave::Great, NoteOffset::Fs),
        N(8, Octave::Small, NoteOffset::B),
        N(8, Octave::Great, NoteOffset::Fs),
        N(8, Octave::Great, NoteOffset::B),
        N(8, Octave::Great, NoteOffset::Fs),
        N(8, Octave::Small, NoteOffset::B),
        N(8, Octave::Great, NoteOffset::Fs), // 33

        N(8, Octave::Great, NoteOffset::Cs),
        N(8, Octave::Great, NoteOffset::Gs),
        N(8, Octave::Small, NoteOffset::Cs),
        N(8, Octave::Great, NoteOffset::Gs),
        N(8, Octave::Great, NoteOffset::Cs),
        N(8, Octave::Great, NoteOffset::Gs),
        N(8, Octave::Small, NoteOffset::Cs),
        N(8, Octave::Great, NoteOffset::Gs), // 34

        N(8, Octave::Great, NoteOffset::Ds),
        N(8, Octave::Great, NoteOffset::As),
        N(8, Octave::Small, NoteOffset::Ds),
        N(8, Octave::Great, NoteOffset::As),
        N(8, Octave::Great, NoteOffset::Ds),
        N(8, Octave::Great, NoteOffset::As),
        N(8, Octave::Small, NoteOffset::Ds),
        N(8, Octave::Great, NoteOffset::As), // 35

        N(8, Octave::Great, NoteOffset::Ds),
        N(8, Octave::Great, NoteOffset::As),
        N(8, Octave::Small, NoteOffset::Ds),
        N(8, Octave::Great, NoteOffset::As),
        N(8, Octave::Great, NoteOffset::Ds),
        N(8, Octave::Great, NoteOffset::As),
        N(8, Octave::Small, NoteOffset::Ds),
        N(8, Octave::Great, NoteOffset::As), // 36

        N(8, Octave::Great, NoteOffset::B),
        N(8, Octave::Great, NoteOffset::Fs),
        N(8, Octave::Small, NoteOffset::B),
        N(8, Octave::Great, NoteOffset::Fs),
        N(8, Octave::Great, NoteOffset::B),
        N(8, Octave::Great, NoteOffset::Fs),
        N(8, Octave::Small, NoteOffset::B),
        N(8, Octave::Great, NoteOffset::Fs), // 37

        N(8, Octave::Great, NoteOffset::Cs),
        N(8, Octave::Great, NoteOffset::Gs),
        N(8, Octave::Small, NoteOffset::Cs),
        N(8, Octave::Great, NoteOffset::Gs),
        N(8, Octave::Great, NoteOffset::Cs),
        N(8, Octave::Great, NoteOffset::Gs),
        N(8, Octave::Small, NoteOffset::Cs),
        N(8, Octave::Great, NoteOffset::Gs), // 38

        N(1, Octave::Great, NoteOffset::Ds, true), // 39
        N(2, Octave::Great, NoteOffset::Ds), 

        N(4, Octave::Small, NoteOffset::Gs), 
        N(4, Octave::Small, NoteOffset::Fs), // 40

        N(8, Octave::Contra, NoteOffset::Ds),
        N(16, Octave::Contra, NoteOffset::Ds),
        N(8, Octave::Great, NoteOffset::As),
        N(16, Octave::Great, NoteOffset::As),
        N(8),
        N(8, Octave::Contra, NoteOffset::Ds),
        N(16, Octave::Contra, NoteOffset::Ds),
        N(8, Octave::Great, NoteOffset::As),
        N(16, Octave::Great, NoteOffset::As),
        N(8), // 41

        N(8, Octave::Contra, NoteOffset::Ds),
        N(16, Octave::Contra, NoteOffset::Ds),
        N(8, Octave::Great, NoteOffset::As),
        N(16, Octave::Great, NoteOffset::As),
        N(8),
        N(8, Octave::Contra, NoteOffset::Ds),
        N(8),
        N(8, Octave::Contra, NoteOffset::Fs),
        N(8), // 42

        N(8, Octave::Contra, NoteOffset::Ds),
        N(16, Octave::Contra, NoteOffset::Ds),
        N(8, Octave::Great, NoteOffset::As),
        N(16, Octave::Great, NoteOffset::As),
        N(8),
        N(8, Octave::Contra, NoteOffset::Ds),
        N(16, Octave::Contra, NoteOffset::Ds),
        N(8, Octave::Great, NoteOffset::As),
        N(16, Octave::Great, NoteOffset::As),
        N(8), // 43

        N(8, Octave::Contra, NoteOffset::Ds),
        N(16, Octave::Contra, NoteOffset::Ds),
        N(8, Octave::Great, NoteOffset::As),
        N(16, Octave::Great, NoteOffset::As),
        N(8),
        N(8, Octave::Contra, NoteOffset::Gs),
        N(8),
        N(8, Octave::Contra, NoteOffset::Fs),
        N(8), // 44

        N(8, Octave::Contra, NoteOffset::Ds),
        N(16, Octave::Contra, NoteOffset::Ds),
        N(8, Octave::Great, NoteOffset::As),
        N(16, Octave::Great, NoteOffset::As),
        N(8),
        N(8, Octave::Contra, NoteOffset::Ds),
        N(16, Octave::Contra, NoteOffset::Ds),
        N(8, Octave::Great, NoteOffset::As),
        N(16, Octave::Great, NoteOffset::As),
        N(8), // 45

        N(8, Octave::Contra, NoteOffset::Ds),
        N(16, Octave::Contra, NoteOffset::Ds),
        N(8, Octave::Great, NoteOffset::As),
        N(16, Octave::Great, NoteOffset::As),
        N(8),
        N(8, Octave::Contra, NoteOffset::Ds),
        N(8),
        N(8, Octave::Contra, NoteOffset::Fs),
        N(8), // 46

        N(8, Octave::Contra, NoteOffset::Ds),
        N(16, Octave::Contra, NoteOffset::Ds),
        N(8, Octave::Great, NoteOffset::As),
        N(16, Octave::Great, NoteOffset::As),
        N(8),
        N(8, Octave::Contra, NoteOffset::Ds),
        N(16, Octave::Contra, NoteOffset::Ds),
        N(8, Octave::Great, NoteOffset::As),
        N(16, Octave::Great, NoteOffset::As),
        N(8), // 47 

        N(8, Octave::Contra, NoteOffset::Ds),
        N(16, Octave::Contra, NoteOffset::Ds),
        N(8, Octave::Great, NoteOffset::As),
        N(16, Octave::Great, NoteOffset::As),
        N(8),
        N(8, Octave::Contra, NoteOffset::Gs),
        N(8),
        N(8, Octave::Contra, NoteOffset::Fs),
        N(8), // 48


        N(1, Octave::Contra, NoteOffset::Ds) // 49

    };
   
    Sheet bottomSheet = {
        0, 0, bottomNoteArray, sizeof(bottomNoteArray) / sizeof(N), false
    };
    Sheet* sheetArray = new Sheet[2]{bottomSheet, topSheet};


    BadAppleArrangement* arrangement = new BadAppleArrangement();
    arrangement->sheetArray = sheetArray;
    arrangement->sheetCount = 2;

    return arrangement;
}
#endif // BADAPPLE_H