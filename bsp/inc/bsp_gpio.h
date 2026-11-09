#ifndef BSP_INC_BSP_GPIO_H
#define BSP_INC_BSP_GPIO_H

#include <stdint.h>

void bsp_gpio_init(void);
void bsp_gpio_pins_init(void);
void bsp_gpio_write(uint8_t pin, uint8_t state);
uint8_t bsp_gpio_read(uint8_t pin);

#endif /* BSP_INC_BSP_GPIO_H */
