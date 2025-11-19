#ifndef RECTANGLE_H
#define RECTANGLE_H
#include "Vector2i.h"
#include <MCUFRIEND_kbv.h>
class Rectangle
{
private:
    uint32_t updateTimestamp;
    const uint16_t background = TFT_BLACK;
public:
    uint16_t color = TFT_GREEN;
    Vector2f position;
    Vector2f size;
    Vector2f velocity;
    MCUFRIEND_kbv* tft;
    Rectangle(MCUFRIEND_kbv* _tft, Vector2f _position, Vector2f _size);
    ~Rectangle();
    void update();
    bool isInRange();
};

#endif