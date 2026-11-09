#ifndef DRIVERS_INC_CHIPS_MCP2515_H
#define DRIVERS_INC_CHIPS_MCP2515_H

#include <stdint.h>
#include "../comm/can_frame.h"

void mcp2515_init(void);
void mcp2515_reset(void);
void mcp2515_set_bitrate(uint32_t bitrate);
void mcp2515_set_listen_only(void);
uint8_t mcp2515_read_frame(can_frame_t *frame);
uint8_t mcp2515_get_interrupt_flags(void);
void mcp2515_clear_interrupt_flags(uint8_t flags);

#endif /* DRIVERS_INC_CHIPS_MCP2515_H */
