#ifndef DRIVERS_INC_DISPLAY_H
#define DRIVERS_INC_DISPLAY_H

#include <stdint.h>

void display_init(void);
void display_process(void);
void display_fill(uint16_t color);
void display_draw_pixel(uint16_t x, uint16_t y, uint16_t color);
void display_flush(void);

#endif /* DRIVERS_INC_DISPLAY_H */
