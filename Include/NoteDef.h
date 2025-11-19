#ifndef NOTE_DEF_H
#define NOTE_DEF_H
#include <unordered_map>
#include <math.h>
enum class NoteOffset {
    C = 3,
    Cs = 4, 
    D = 5, 
    Ds = 6, 
    E = 7, 
    F = 8, 
    Fs = 9, 
    G = 10, 
    Gs = 11, 
    A = 12, 
    As = 13, 
    B = 14
};


enum class Octave {
    SubContra = -4, 
    Contra = -3, 
    Great = -2, 
    Small = -1,
    One = 0, 
    Two = 1, 
    Three = 2, 
    Four = 3, 
    Five = 4
};



class NoteDef {
private:
    std::unordered_map<int, int> notes;
    int calcNoteFreq(Octave octave, NoteOffset noteOffset);
public:
    const float A0_freq = 440.0f;
    NoteDef();
    int getNote(Octave octave, NoteOffset noteOffset);
};


#endif // NOTE_DEF_H