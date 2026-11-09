#ifndef BSP_INC_BSP_TIM_H
#define BSP_INC_BSP_TIM_H

#include <stdint.h>

void bsp_tim_init(void);
void bsp_tim_tick_init(void);
uint32_t bsp_tim_get_tick_ms(void);

#endif /* BSP_INC_BSP_TIM_H */
