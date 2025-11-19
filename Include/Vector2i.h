#ifndef VECTOR2I_H
#define VECTOR2I_H

#include <Arduino.h>
typedef struct Vector2f
{
    float x = 0;
    float y = 0;

    bool operator== (Vector2f const& r) const
    {
        return (this->x == r.x) && (this->y == r.y);
    }

    bool operator!= (Vector2f const& r) const
    {
        return !(*this == r);
    }

    Vector2f operator+ (Vector2f const& r) const 
    {
        return Vector2f{this->x + r.x, this->y + r.y};
    }

    Vector2f operator* (float const& r) const 
    {
        return Vector2f{this->x * r, this->y * r};
    }

};


#endif