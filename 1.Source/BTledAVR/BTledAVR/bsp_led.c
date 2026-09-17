#include "bsp_led.h"
#include <avr/io.h>
void bsp_led_init(void){
	
	/*PC0, PC1 is output */
	DDRC |= (3 <<PC0);
	
	/*PC0, PC1 is off */
	PORTC &= ~(3<<PC0);
}

void bsp_led_on(void){
	
	SET_BIT(PORTC, 0);
	
}

void bsp_led_off(void){
	
	CLEAR_BIT(PORTC, 0);
}

void bsp_led_toggle(void){
	
	TOGGLE_BIT(PORTC, 1);
}