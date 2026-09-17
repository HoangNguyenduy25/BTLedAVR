#ifndef BSP_LED_H
#define BSP_LED_H

#define SET_BIT(REG,BIT)		(REG |= (1<<BIT))
#define CLEAR_BIT(REG,BIT)		(REG &= (~(1<<BIT)))
#define TOGGLE_BIT(REG,BIT)		(REG ^=(1<<BIT))

void bsp_led_init();

void bsp_led_on();

void bsp_led_off();

void bsp_led_toggle();


#endif