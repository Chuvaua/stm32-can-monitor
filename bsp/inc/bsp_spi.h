#ifndef BSP_INC_BSP_SPI_H
#define BSP_INC_BSP_SPI_H

#include <stdint.h>

void bsp_spi_init(void);
void bsp_spi1_init(void);
void bsp_spi2_init(void);

/* Bus selection/pins are board-specific and not assigned yet. */
void bsp_spi_transfer(uint8_t bus, const uint8_t *tx, uint8_t *rx, uint16_t size);

#endif /* BSP_INC_BSP_SPI_H */
