#ifndef INPUT_H
#define INPUT_H 

#include <Arduino.h>
#include "Vector2i.h"
#define VRx PIN_A5
#define VRy PA6
#define SW PB8

void handleClickCallback();
class Input 
{
private: 
    static constexpr float noiseThreshold = 0.035f; 
public:
    static Input* Instance;
    uint32_t LastClickTimestamp;
    uint32_t LastClickTimeout = 250;
    Input();
    Vector2f readAxes();
    void SetCustomClickCallback(void (*customClickCallback)());
    void (*customClickCallback)();
};

#endif // INPUT_H