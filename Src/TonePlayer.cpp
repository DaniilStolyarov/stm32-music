#include "../Include/TonePlayer.h"
#include "../Include/RaiseClock.h"


TonePlayer::TonePlayer()
{
    SystemClock_Config();
    SystemClockValue = F_CPU / 1000000;
    Serial.printf("Using Core Frequency:\t%d MHz\n", SystemClockValue);
}

void TonePlayer::init()
{
    GPIO_Init();           
    TIM_Init();             // конфиг таймера

    stopPlaying();
    
}

void TonePlayer::playTone(uint32_t freq) {
    uint32_t timer_clk = SystemClockValue * 1000000;        // TIM3 работает от APB1 → х2 = 72MHz
    uint32_t prescaler = SystemClockValue - 1;          // делим до 1 MHz
    uint32_t arr = (1000000 / freq) - 1;  // период

    __HAL_TIM_SET_PRESCALER(&htim, prescaler);
    __HAL_TIM_SET_AUTORELOAD(&htim, arr);
    __HAL_TIM_SET_COMPARE(&htim, TIM_CHANNEL_2, arr / 2);
}


void TonePlayer::GPIO_Init(void) {
    __HAL_RCC_GPIOA_CLK_ENABLE();

    GPIO_InitTypeDef GPIO_InitStruct = {0};
    GPIO_InitStruct.Pin = GPIO_PIN_7;
    GPIO_InitStruct.Mode = GPIO_MODE_AF_PP;
    GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_HIGH;

    HAL_GPIO_Init(GPIOA, &GPIO_InitStruct);
}

void TonePlayer::TIM_Init(void) {
    __HAL_RCC_TIM3_CLK_ENABLE();

    htim.Instance = TIM3;
    htim.Init.Prescaler = SystemClockValue - 1;
    htim.Init.CounterMode = TIM_COUNTERMODE_UP;
    htim.Init.Period = 1000;
    htim.Init.ClockDivision = TIM_CLOCKDIVISION_DIV1;

    HAL_TIM_PWM_Init(&htim);

    TIM_OC_InitTypeDef sConfig = {0};
    sConfig.OCMode = TIM_OCMODE_PWM1;
    sConfig.Pulse = 500;
    sConfig.OCPolarity = TIM_OCPOLARITY_HIGH;

    HAL_TIM_PWM_ConfigChannel(&htim, &sConfig, TIM_CHANNEL_2);
    HAL_TIM_PWM_Start(&htim, TIM_CHANNEL_2);
}


void TonePlayer::stopPlaying()
{
    __HAL_TIM_SET_COMPARE(&htim, TIM_CHANNEL_2, 0);
}