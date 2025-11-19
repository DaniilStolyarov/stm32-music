#ifndef TONEPLAYER_PB6_TIM4_H
#define TONEPLAYER_PB6_TIM4_H
#include "../Include/TonePlayer.h"

class TonePlayer_PB6_TIM4 : public TonePlayer {
private:
    void GPIO_Init() override;
    void TIM_Init() override;
public:
    void playTone(uint32_t freq) override;
    void stopPlaying() override;
    
};

#endif // TONEPLAYER_PB6_TIM4_H