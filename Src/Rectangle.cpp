#include "Include/Rectangle.h"


Rectangle::Rectangle(MCUFRIEND_kbv* _tft, Vector2f _position, Vector2f _size)
{
    updateTimestamp = millis();
    tft = _tft;
    position = _position;
    size = _size;
}

void Rectangle::update()
{
    //Serial.printf("pos: {%d, %d}\n", (int)position.x, (int)position.y);
    float deltaTime = (millis() - updateTimestamp) / (float)1000;
    Vector2f movement = velocity * deltaTime;
    if (movement != Vector2f{0,0})
    {
        int x = round(position.x - (size.x / 2));
        int y = round(position.y - (size.y / 2));
            //tft->fillRect(x, y, size.x, size.y, background);
        tft->fillRect(x, (uint16_t)floor(y + size.y - abs(movement.y)), (int)size.x+1, ceil(abs(movement.y)), background);
       
    }
    
    position = position + movement;
    updateTimestamp = millis();

    int x = round(position.x - (size.x / 2));
    int y = round(position.y - (size.y / 2));
    
    if (isInRange() && movement != Vector2f{0,0})
    {
        tft->fillRect(x, y, size.x, size.y, color);
    }
}
bool Rectangle::isInRange()
{
    //Serial.printf("y: %d, size.y: %d", (int)y, int(size.y));
    return (position.x - size.x / 2) < tft->width() && (position.x + size.x / 2) > 0 && (position.y - size.y / 2) < (tft->height() - ( size.y / 2)) && (position.y + size.y / 2) > 0;
}

Rectangle::~Rectangle()
{
    uint16_t x = round(position.x - (size.x / 2));
    uint16_t y = round(position.y - (size.y / 2));

    tft->fillRect(x, y, size.x, size.y, background);
}