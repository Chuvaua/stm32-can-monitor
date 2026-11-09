#ifndef DRIVERS_INC_COMM_CAN_FRAME_H
#define DRIVERS_INC_COMM_CAN_FRAME_H

#include <stdint.h>

/* Classic CAN only (MCP2515). */
typedef struct
{
    uint32_t id;
    uint8_t data[8];
    uint8_t dlc;
    uint8_t extended;
    uint8_t remote;
} can_frame_t;

#endif /* DRIVERS_INC_COMM_CAN_FRAME_H */
