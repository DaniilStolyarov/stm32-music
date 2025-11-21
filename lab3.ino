#include <MCUFRIEND_kbv.h>
#include "include/Input.h"
#include "Include/TonePlayer.h"
#include "Include/NoteDef.h"
#include "Include/TonePlayer_PB6_TIM4.h"
#include "Include/SheetPlayer.h"
#include "Include/BadApple.h"
#include "Include/Rectangle.h"
#include "Include/LinkedList.h"
#include "Include/Player.h"
#include "Include/DebugSong.h"
#include "Include/Scorer.h"

#define RECT_WIDTH 25
#define RECT_HEIGHT 25
#define NOTE_SPEED 1000
#define BEAT 1024
MCUFRIEND_kbv tft;
Input input;
TonePlayer tonePlayer1;
TonePlayer_PB6_TIM4 tonePlayer2;
SheetPlayer* sheetPlayer;
LinkedList<Rectangle>* rectList;
NoteDef noteDef = NoteDef();
Player* player;
Scorer* scorer;
int Score = 0;

uint16_t noteColors[12] =
{
    0xF800, // ярко-красный
    0x07E0, // ярко-зелёный
    0x001F, // ярко-синий
    0xF81F, // пурпурный / розовый
    0x07FF, // ярко-голубой / циан
    0xFD20, // оранжево-красный
    0xAFE5, // мягкий зелёно-голубой
    0x841F, // темно-пурпурный
    0xFC10, // оранжевый
    0x03FF, // яркий голубой
    0xF81F, // ярко-розовый
    0x7BEF  // светло-серый / пастель
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
    Rectangle* rect = new Rectangle(&tft, Vector2f{RECT_WIDTH * (float)((int)note.noteOffset - (int)NoteOffset::C) + RECT_WIDTH / 2, tft.height() - (128/(note.len) + 61)}, Vector2f{RECT_WIDTH, 256/(note.len)});
    rect->velocity = Vector2f{0, (-1.0f)*(NOTE_SPEED)};
    rect->color = noteColors[(int)note.noteOffset - (int)NoteOffset::C];
    rectList->push(rect);
}

void setup()
{
    
    tonePlayer1.init();
    tonePlayer2.init();
    
    uint16_t ID = tft.readID();
    tft.begin(ID);
    tft.fillScreen(TFT_BLACK);

    // rectangle = new Rectangle(&tft, Vector2f{40, 40}, Vector2f{30, 100});
    // rectangle->velocity = Vector2f{0, 100};
    rectList = new LinkedList<Rectangle>();

    for (int i = 0; i < 12; i++)
    {
        tft.setCursor(i * RECT_WIDTH + RECT_WIDTH / 4, tft.height() - 55);
        tft.setTextSize(2);
        tft.print(noteStrings[i]);

        tft.drawRect(RECT_WIDTH * i, tft.height() - 60, RECT_WIDTH, 30, noteColors[i]);
    }

    TonePlayer** tonePlayers = new TonePlayer*[2]{&tonePlayer1, &tonePlayer2};
    BadAppleArrangement* arrangement = BadAppleSong();
    //DebugSongArrangement* arrangement = DebugSong();
    sheetPlayer = new SheetPlayer(arrangement->sheetCount, tonePlayers, arrangement->sheetArray);
    sheetPlayer->afterNotePlayed = SpawnRectangle;
    sheetPlayer->beat = BEAT;
    player = new Player(&tft, Vector2f{(float)tft.width() / 2, (float)tft.height() - 100});
    scorer = new Scorer(&tft);
}
uint32_t frames = 0;
void loop()
{
    player->update(input.readAxes());
    if (frames % 1 == 0)
    {
        ListNode<Rectangle>* node = rectList->head;
        while (node)
        {
            ListNode<Rectangle>* nextNode = node->next;
            node->data->update();
            bool playerCollides = player->collide(node->data);
            if(!node->data->isInRange() || playerCollides)
            {
                if (playerCollides) {
                    scorer->increment();
                    scorer->update();
                }
                //Serial.println("remove");
                rectList->remove(node);
                delete node->data;
                delete node;
            }
            node = nextNode;
        }
        
    }
    sheetPlayer->play();
    frames++;
    //Serial.println(frames);
   // Serial.println(rectList->size);
}