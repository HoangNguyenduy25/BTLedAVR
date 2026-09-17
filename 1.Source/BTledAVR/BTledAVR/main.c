/*
 * BTledAVR.c
 *
 * Created: 9/14/2026 11:02:41 AM
 * Author : p14s
 */ 

#include "app_button.h"
#include "bsp_button.h"
#include "bsp_timer.h"
#include "bsp_led.h"
#include <avr/io.h>
#include <stdint.h>
#include <avr/interrupt.h>


int main(void)
{
    bsp_led_init();
	bsp_button_init();
	BSP_Timer1_Init();
	sei();
	
    while (1) 
    {
		app_button_update();
		switch(app_button_get_state()){
			case BUTTON_PRESSED:
				bsp_led_on();
				BSP_DelayMs(1000);
				bsp_led_toggle();
				break;
			case BUTTON_RELEASED:
				bsp_led_off();
				break;
		}
	}
}

