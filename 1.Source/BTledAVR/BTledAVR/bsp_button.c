#include "bsp_button.h"
#include"avr/io.h"

void bsp_button_init(void){
	/*PA0 is input */
	DDRA &=~(1<<PA0);
	/*PA0 turn on pull-up resistor */
	PORTA |= (1<<PA0);
}

uint8_t bsp_button_start_get_state(){
	if((PINA & (1<<PA0)) == 0){
		
		/* Button state = logic 0 */
		return BUTTON_PRESSED;
	}
	else{
		
		/* Button state = logic 1 */
		return BUTTON_RELEASED;
	}
}