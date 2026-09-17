#ifndef BSP_TIMER_H
#define BSP_TIMER_H

#include <stdint.h>

extern volatile uint32_t sys_time_count;

void BSP_Timer1_Init(void);

uint32_t BSP_GetSysTimeMs(void);

void BSP_DelayMs(uint32_t delayMs);

#endif /*BSP_TIMER_H*/