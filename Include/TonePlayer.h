#ifndef TONE_PLAYER_H
#define TONE_PLAYER_H

#include <Arduino.h>
class TonePlayer
{
protected:
    virtual void GPIO_Init(void);
    virtual void TIM_Init(void);
    
    uint32_t SystemClockValue;
    TIM_HandleTypeDef htim;
    
public:
    TonePlayer();
    void init();
    virtual void playTone(uint32_t freq);
    virtual void stopPlaying();
};


#endif // TONE_PLAYER_H