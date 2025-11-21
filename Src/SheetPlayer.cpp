#include "Include/SheetPlayer.h"

SheetPlayer::SheetPlayer(int _sheetCount, TonePlayer** _tonePlayers, Sheet* _sheets)
{
    sheetCount = _sheetCount;
    tonePlayers = _tonePlayers;
    sheets = _sheets;
    noteDef = new NoteDef();
}

void SheetPlayer::play()
{
    for (int sheetIndex = 0; sheetIndex < sheetCount; sheetIndex++)
    {
        //Serial.printf("sheetIndex: %d\n", sheetIndex);
        Sheet& sheet = sheets[sheetIndex];
        TonePlayer* tonePlayer = tonePlayers[sheetIndex];
        if (sheet.currentNoteIndex >= sheet.noteCount)
        {
            tonePlayer->stopPlaying(); 
            continue;
        }
        const SheetNote& sheetNote = sheet.noteArray[sheet.currentNoteIndex];
        
        if (sheet.isCurrentNoteActivated)
        {
            if (!sheetNote.smoothTransition && ((millis() - sheet.currentNoteTimestamp) > (beat / sheetNote.len - transitionDelay)))
            {
                tonePlayer->stopPlaying();
            }
            if ((millis() - sheet.currentNoteTimestamp) > (beat / sheetNote.len))
            {
                sheet.currentNoteIndex++;
                sheet.currentNoteTimestamp += (beat / sheetNote.len);
                sheet.isCurrentNoteActivated = false;
            }
            continue;
        }
        else
        {
            //Serial.printf("Playing note: %d\n", sheet.currentNoteIndex);
            if (sheetNote.isPause)
            {
                tonePlayer->stopPlaying();
            }
            else
            {
                tonePlayer->playTone(noteDef->getNote(sheetNote.octave, sheetNote.noteOffset));
                if (afterNotePlayed != nullptr)
                {
                    afterNotePlayed(sheetIndex);
                }
            }
            sheet.isCurrentNoteActivated = true;
        }
    }
}
