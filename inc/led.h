#ifndef _LED_H
#define _LED_H


#define LED_RX_Pin GPIO_PIN_1
#define LED_RX_Port GPIOB
#define LED_RX LED_RX_Port , LED_RX_Pin

#define LED_TX_Pin GPIO_PIN_0
#define LED_TX_Port GPIOB
#define LED_TX LED_TX_Port , LED_TX_Pin



#define LED_DURATION 25 

void led_init();
void led_tx_blink(uint8_t numblinks);
void led_rx_blink(uint8_t numblinks);

#endif
