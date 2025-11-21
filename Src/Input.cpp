#include "../Include/Input.h"

Input *Input::Instance = nullptr;
void handleClickCallback()
{
    if ((millis() - Input::Instance->LastClickTimestamp) < Input::Instance->LastClickTimeout) return;
    
    Input::Instance->LastClickTimestamp = millis();
    Input::Instance->customClickCallback();
}

void defaultClickCallback()
{
    // do nothing
}
Input::Input()
{
    pinMode(SW, INPUT_PULLUP);
    this->Instance = this;
    customClickCallback = defaultClickCallback;
    LastClickTimestamp = millis();  
    attachInterrupt(SW, handleClickCallback, FALLING);
    analogReadResolution(12);
}
float map(float x, float in_min, float in_max, float out_min, float out_max)
{
  return (x - in_min) * (out_max - out_min) / (in_max - in_min) + out_min;
}
float input_curve(float x) {
    
    return x * x * x;
}
Vector2f Input::readAxes()
{
    Vector2f axes;
    axes.y = map((float)analogRead(VRx), 0.0f, 4095.0f, -1.0f, 1.0f);
    axes.x = map((float)analogRead(VRy), 0.0f, 4095.0f, 1.0f, -1.0f);
    //Serial.println(sqrt(axes.y * axes.y + axes.x * axes.x));
    //Serial.print(axes.x); Serial.printf(" "); Serial.println(axes.y);

    if (sqrt(axes.y * axes.y + axes.x * axes.x) < noiseThreshold)
    {   
        axes.y = 0; axes.x = 0;
    }
    axes.y = input_curve(axes.y);
    axes.x = input_curve(axes.x);
    return axes;
}

void Input::SetCustomClickCallback(void (*_customClickCallback)())
{
    customClickCallback = _customClickCallback;
}