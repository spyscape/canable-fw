//
// LED: Handles blinking of status light
//

#include "stm32f0xx_hal.h"
#include "led.h"


// Initialize LED GPIOs
void led_init()
{
    __HAL_RCC_GPIOB_CLK_ENABLE();
    GPIO_InitTypeDef GPIO_InitStruct;
    GPIO_InitStruct.Pin = GPIO_PIN_0 | GPIO_PIN_1;
    GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
    GPIO_InitStruct.Pull = GPIO_PULLUP;
    GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_MEDIUM;
    GPIO_InitStruct.Alternate = 0;
    HAL_GPIO_Init(GPIOB, &GPIO_InitStruct);

    HAL_GPIO_WritePin(LED_TX, 1);
    HAL_GPIO_WritePin(LED_RX, 1);
}

// Blink blue LED (blocking)
void led_tx_blink(uint8_t numblinks)
{
	uint8_t i;
	for(i=0; i<numblinks; i++)
	{
		HAL_GPIO_WritePin(LED_TX, 0);
		HAL_Delay(100);
		HAL_GPIO_WritePin(LED_TX, 1);
		HAL_Delay(100);
	}
}

// Blink blue LED (blocking)
void led_rx_blink(uint8_t numblinks)
{
	uint8_t i;
	for(i=0; i<numblinks; i++)
	{
		HAL_GPIO_WritePin(LED_RX, 0);
		HAL_Delay(100);
		HAL_GPIO_WritePin(LED_RX, 1);
		HAL_Delay(100);
	}
}
