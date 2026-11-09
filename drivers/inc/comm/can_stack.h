#ifndef DRIVERS_INC_COMM_CAN_STACK_H
#define DRIVERS_INC_COMM_CAN_STACK_H

#include <stdint.h>
#include "can_frame.h"

void can_stack_init(void);
void can_stack_process(void);
void can_stack_start_bitrate_detection(void);
uint8_t can_stack_get_frame(can_frame_t *frame);
uint32_t can_stack_get_bitrate(void);

#endif /* DRIVERS_INC_COMM_CAN_STACK_H */
