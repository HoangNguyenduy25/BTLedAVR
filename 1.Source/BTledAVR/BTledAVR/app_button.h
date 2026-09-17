#ifndef APP_BUTTON_H
#define APP_BUTTON_H

#include <stdint.h>

void app_button_update();
uint8_t app_button_get_state();

extern volatile uint16_t app_button_timer_count;
#endif /*APP_BUTTON_H */