#ifndef DRIVERS_INC_TOUCH_H
#define DRIVERS_INC_TOUCH_H

#include <stdint.h>

/* Optional touchscreen support. */
void touch_init(void);
void touch_process(void);
uint8_t touch_get_point(uint16_t *x, uint16_t *y);

#endif /* DRIVERS_INC_TOUCH_H */
