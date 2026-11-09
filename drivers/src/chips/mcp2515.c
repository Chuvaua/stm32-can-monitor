#include "../../inc/chips/mcp2515.h"

void mcp2515_init(void)
{
}

void mcp2515_reset(void)
{
}

void mcp2515_set_bitrate(uint32_t bitrate)
{
    (void)bitrate;
}

void mcp2515_set_listen_only(void)
{
}

uint8_t mcp2515_read_frame(can_frame_t *frame)
{
    (void)frame;
    return 0;
}

uint8_t mcp2515_get_interrupt_flags(void)
{
    return 0;
}

void mcp2515_clear_interrupt_flags(uint8_t flags)
{
    (void)flags;
}
