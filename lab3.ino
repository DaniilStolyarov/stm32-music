#include <MCUFRIEND_kbv.h>
#include "include/Input.h"
#include "Include/TonePlayer.h"
#include "Include/NoteDef.h"
#include "Include/TonePlayer_PB6_TIM4.h"
#include "Include/SheetPlayer.h"
#include "Include/BadApple.h"
#include "Include/Rectangle.h"
#include "Include/LinkedList.h"
#define RECT_WIDTH 25
#define RECT_HEIGHT 25
MCUFRIEND_kbv tft;
Input input;
TonePlayer tonePlayer1;
TonePlayer_PB6_TIM4 tonePlayer2;
SheetPlayer* sheetPlayer;
LinkedList<Rectangle>* rectList;
NoteDef noteDef = NoteDef();
uint16_t noteColors[12] =
{
    TFT_BLUE, TFT_DARKGREEN, TFT_DARKCYAN, TFT_MAROON, TFT_PURPLE, TFT_OLIVE,
    TFT_RED, TFT_MAGENTA, TFT_YELLOW, TFT_WHITE, TFT_ORANGE, TFT_PINK

};
String noteStrings[12]
{
  "C", "#", "D", "#", "E", "F", "#", "G", "#", "A", "#",  "B"  
}; 
int noteArr[7] = {
    noteDef.getNote(Octave::One, NoteOffset::C),
    noteDef.getNote(Octave::One, NoteOffset::D),
    noteDef.getNote(Octave::One, NoteOffset::E),
    noteDef.getNote(Octave::One, NoteOffset::F),
    noteDef.getNote(Octave::One, NoteOffset::G),
    noteDef.getNote(Octave::One, NoteOffset::A),
    noteDef.getNote(Octave::One, NoteOffset::B)
};

void SpawnRectangle(int sheetIndex)
{
    if (sheetIndex != 1) return;
    const SheetNote& note = sheetPlayer->sheets[sheetIndex].noteArray[sheetPlayer->sheets[sheetIndex].currentNoteIndex];
    Rectangle* rect = new Rectangle(&tft, Vector2f{RECT_WIDTH * (float)((int)note.noteOffset - (int)NoteOffset::C) + RECT_WIDTH / 2, tft.height() - (512/(note.len) + 20)}, Vector2f{RECT_WIDTH, 256/(note.len)});
    rect->velocity = Vector2f{0, -500};
    rect->color = noteColors[(int)note.noteOffset - (int)NoteOffset::C];
    rectList->push(rect);
}

void setup()
{
    tonePlayer1.init();
    tonePlayer2.init();

    TonePlayer** tonePlayers = new TonePlayer*[2]{&tonePlayer1, &tonePlayer2};
    BadAppleArrangement* arrangement = BadAppleSong();
    sheetPlayer = new SheetPlayer(arrangement->sheetCount, tonePlayers, arrangement->sheetArray);
    sheetPlayer->afterNotePlayed = SpawnRectangle;
    
    uint16_t ID = tft.readID();
    tft.begin(ID);
    tft.fillScreen(TFT_BLACK);

    // rectangle = new Rectangle(&tft, Vector2f{40, 40}, Vector2f{30, 100});
    // rectangle->velocity = Vector2f{0, 100};
    rectList = new LinkedList<Rectangle>();

    for (int i = 0; i < 12; i++)
    {
        tft.setCursor(i * RECT_WIDTH + RECT_WIDTH / 4, tft.height() - 25);
        tft.setTextSize(2);
        tft.print(noteStrings[i]);

        tft.drawRect(RECT_WIDTH * i, tft.height() - 30, RECT_WIDTH, 30, noteColors[i]);
    }
}

void loop()
{
    ListNode<Rectangle>* node = rectList->head;
    while (node)
    {
        ListNode<Rectangle>* nextNode = node->next;
        if(node->data->isInRange())
        {
            node->data->update();
        }
        else
        {
            Serial.println("remove");
            rectList->remove(node);
            delete node->data;
            delete node;
        }
        node = nextNode;
    }
    sheetPlayer->play();
   // Serial.println(rectList->size);
}