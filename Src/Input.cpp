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
}


Vector2f Input::readAxes()
{
    Vector2f axes;
    axes.y = map(analogRead(VRx), 0, 1023, -1, 1);
    axes.x = map(analogRead(VRy), 0, 1023, 1, -1);
    return axes;
}

void Input::SetCustomClickCallback(void (*_customClickCallback)())
{
    customClickCallback = _customClickCallback;
}