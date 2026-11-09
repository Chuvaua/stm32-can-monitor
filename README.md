# STM32 CAN Bus Monitor

Standalone Classic CAN bus monitor based on STM32 and MCP2515.

## Planned features

- Automatic CAN bitrate detection in MCP2515 listen-only mode.
- CAN 2.0A/2.0B frame reception and display (11-bit and 29-bit identifiers).
- SPI TFT display; optional SPI touch controller.
- Message filters, counters and bus statistics.
- No RTOS; periodic processing in the main loop.

## Hardware (to be selected)

- Affordable STM32 development board (Discovery / Nucleo or equivalent).
- MCP2515 CAN controller over SPI, with a CAN transceiver.
- SPI TFT display.
- Optional touch panel.

## Repository layout

- `app/` — one application module, `app.h` and `app.c`.
- `bsp/inc/` — board support interfaces.
- `bsp/init/` — MCU peripheral initialization placeholders.
- `bsp/src/` — BSP function placeholders.
- `drivers/inc/` — interfaces for MCP2515, display, touch and CAN stack.
- `drivers/src/` — driver function placeholders.

This is an **API skeleton only**: all C function bodies are empty. MCU, display, pin mapping and SPI channels will be selected later. There is no CubeMX-generated code and no firmware build yet.

## CAN bitrate detection

Bitrate detection is planned for a receive-only connection, trying supported bitrates and validating incoming frames. It requires traffic on the bus; no bitrate can be inferred from a silent bus.
