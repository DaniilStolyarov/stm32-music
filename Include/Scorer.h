#ifndef SCORER_H
#define SCORER_H

#include <MCUFRIEND_kbv.h>

class Scorer
{
private:
    const uint16_t background = TFT_BLACK;
public:
    int score;
    int prevScore;
    MCUFRIEND_kbv* tft;
    uint16_t color = TFT_WHITE;
    Scorer(MCUFRIEND_kbv* _tft);
    void update();
    void increment();
};
#endif // SCORER_H