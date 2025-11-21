#include "Include/Scorer.h"


Scorer::Scorer(MCUFRIEND_kbv* _tft)
{
    score = 0;
    prevScore = 0;
    tft = _tft;
    update();
    tft->setCursor(tft->width() - 100, tft->height() - 25);
    tft->setTextSize(2);
    tft->setTextColor(color);
    tft->printf("%d MHz\n",  F_CPU / 1000000);
}

void Scorer::increment()
{
    prevScore = score;
    score++;
}

void Scorer::update()
{
    tft->setCursor(0, tft->height() - 25);
    tft->setTextSize(2);
    tft->setTextColor(background);
    tft->printf("Score: %d", prevScore);
    tft->setCursor(0, tft->height() - 25);
    tft->setTextSize(2);
    tft->setTextColor(color);
    tft->printf("Score: %d", score); 
}