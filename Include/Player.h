#ifndef PLAYER_H
#define PLAYER_H
#include "Vector2i.h"
#include <MCUFRIEND_kbv.h>
#include "Include/Rectangle.h"
class Player
{
private:
    uint32_t updateTimestamp;
    const uint16_t background = TFT_BLACK;
public:
    uint16_t color = TFT_YELLOW;
    Vector2f position;
    float movementSpeed = 500.0f;
    int radius = 15;
    MCUFRIEND_kbv* tft;
    Player(MCUFRIEND_kbv* _tft, Vector2f _position);
    void update(Vector2f movement);
    bool collide(Rectangle* rect);
};

#endif // PLAYER_H