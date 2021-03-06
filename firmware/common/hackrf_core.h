/*
 * Copyright 2012 Michael Ossmann <mike@ossmann.com>
 * Copyright 2012 Benjamin Vernoux <titanmkd@gmail.com>
 * Copyright 2012 Jared Boone <jared@sharebrained.com>
 *
 * This file is part of HackRF.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2, or (at your option)
 * any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; see the file COPYING.  If not, write to
 * the Free Software Foundation, Inc., 51 Franklin Street,
 * Boston, MA 02110-1301, USA.
 */

#ifndef __HACKRF_CORE_H
#define __HACKRF_CORE_H

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdint.h>
#include <stdbool.h>

/* hardware identification number */
#define BOARD_ID_JELLYBEAN  0
#define BOARD_ID_JAWBREAKER 1
#define BOARD_ID_HACKRF_ONE 2

#ifdef JELLYBEAN
#define BOARD_ID BOARD_ID_JELLYBEAN
#endif

#ifdef JAWBREAKER
#define BOARD_ID BOARD_ID_JAWBREAKER
#endif

#ifdef HACKRF_ONE
#define BOARD_ID BOARD_ID_HACKRF_ONE
#endif

/*
 * SCU PinMux
 */

/* GPIO Output PinMux */
#define SCU_PINMUX_LED1     (P2_5) /* GPIO5[5] on P2_5 */

/* GPIO Input PinMux */
#define SCU_PINMUX_BOOT0    (P1_1)  /* GPIO0[8] on P1_1 */
#define SCU_PINMUX_BOOT1    (P1_2)  /* GPIO0[9] on P1_2 */
#define SCU_PINMUX_BOOT2    (P2_8)  /* GPIO5[7] on P2_8 */
#define SCU_PINMUX_BOOT3    (P2_9)  /* GPIO1[10] on P2_9 */

/* SSP1 Peripheral PinMux */
#define SCU_SSP1_MISO       (P1_3)  /* P1_3 */
#define SCU_SSP1_MOSI       (P1_4)  /* P1_4 */
#define SCU_SSP1_SCK        (P1_19) /* P1_19 */
//#define SCU_SSP1_SSEL       (P1_20) /* P1_20 */

/* SGPIO interface */
#define SCU_PINMUX_SGPIO0   (P0_0) /* D2 */
#define SCU_PINMUX_SGPIO1   (P0_1) /* D3 */
#define SCU_PINMUX_SGPIO2   (P1_15) /* D4 */
#define SCU_PINMUX_SGPIO3   (P1_16) /* D5 */
#define SCU_PINMUX_SGPIO4   (P2_0) /* D6 */
#define SCU_PINMUX_SGPIO5   (P2_1) /* D7 */
#define SCU_PINMUX_SGPIO6   (P2_2) /* D8 */
#define SCU_PINMUX_SGPIO7   (P1_0) /* D8 */
#define SCU_PINMUX_SGPIO8   (P1_12) /* CLK */
#define SCU_PINMUX_SGPIO9   (P1_13) /* CLK */
#define SCU_PINMUX_SGPIO10  (P1_14) /* D0 */
#define SCU_PINMUX_SGPIO11  (P1_17) /* D1 */

#define SCU_PINMUX_SGPIO12  (P1_18) /* NC */
#define SCU_PINMUX_SGPIO13  (P4_8) /* NC */
#define SCU_PINMUX_SGPIO14  (P1_6) /* NC */
#define SCU_PINMUX_SGPIO15  (P1_5) /* NC */

#define SCU_PINMUX_GPIO0  (P2_11)

/* ADF4158 */
#define SCU_ADF_TXDATA (P1_7) /* GPIO1[0] */
#define SCU_ADF_LE (P1_8) /* GPIO1[1] */
#define SCU_ADF_CE (P1_9) /* GPIO1[2] */
/* Interfaces */
#define SCU_GPIO0 (P2_11) /* GPIO1[11] */
#define SCU_GPIO1 (P2_7) /* GPIO0[7] */
#define SCU_MCP_CS (P6_5) /* GPIO3[4] */
#define SCU_MCP_UD (P6_9) /* GPIO3[5] */
/* Control lines */
#define SCU_PA_OFF (P3_1) /* GPIO5[8] */
#define SCU_MIX_ENBL (P3_2) /* GPIO5[9] */

/* ADC */
#define SCU_ADC_NOE (P1_20)

/* SPI flash */
#define SCU_SSP0_MISO       (P3_6)
#define SCU_SSP0_MOSI       (P3_7)
#define SCU_SSP0_SCK        (P3_3)
#define SCU_SSP0_SSEL       (P3_8) /* GPIO5[11] on P3_8 */
#define SCU_FLASH_HOLD      (P3_4) /* GPIO1[14] on P3_4 */
#define SCU_FLASH_WP        (P3_5) /* GPIO1[15] on P3_5 */

#define SCU_OTG_USBV (P2_3)

#define SCU_MCP_CS (P6_5)
#define SCU_MCP_UD (P6_9)

/*
 * GPIO Pins
 */

/* GPIO Output */
#define PIN_LED1    (BIT5)
#define PORT_LED1_3 (GPIO5)

#define PORT_PA_OFF (GPIO5)
#define PIN_PA_OFF (BIT8)

#define PORT_MIX_ENBL (GPIO5)
#define PIN_MIX_ENBL (BIT9)

#define PIN_ADF_CE       (BIT2)
#define PORT_ADF_CE      (GPIO1)

#define PIN_ADF_LE       (BIT1)
#define PORT_ADF_LE      (GPIO1)

#define PIN_ADF_TXDATA  (BIT0)
#define PORT_ADF_TXDATA (GPIO1)

#define PORT_ADC_NOE (GPIO0)
#define PIN_ADC_NOE (BIT15)

#define PIN_FLASH_HOLD (BIT14) /* GPIO1[14] on P3_4 */
#define PIN_FLASH_WP   (BIT15) /* GPIO1[15] on P3_5 */
#define PORT_FLASH     (GPIO1)
#define PIN_SSP0_SSEL  (BIT11) /* GPIO5[11] on P3_8 */
#define PORT_SSP0_SSEL (GPIO5)

/* GPIO Input */
#define PIN_BOOT0   (BIT8)  /* GPIO0[8] on P1_1 */
#define PIN_BOOT1   (BIT9)  /* GPIO0[9] on P1_2 */
#define PIN_BOOT2   (BIT7)  /* GPIO5[7] on P2_8 */
#define PIN_BOOT3   (BIT10) /* GPIO1[10] on P2_9 */

/* Read GPIO Pin */
#define GPIO_STATE(port, pin) ((GPIO_PIN(port) & (pin)) == (pin))
#define BOOT0_STATE       GPIO_STATE(GPIO0, PIN_BOOT0)
#define BOOT1_STATE       GPIO_STATE(GPIO0, PIN_BOOT1)
#define BOOT2_STATE       GPIO_STATE(GPIO5, PIN_BOOT2)
#define BOOT3_STATE       GPIO_STATE(GPIO1, PIN_BOOT3)
#define MIXER_SDATA_STATE GPIO_STATE(PORT_MIXER_SDATA, PIN_MIXER_SDATA)
#define CPLD_TDO_STATE    GPIO_STATE(PORT_CPLD_TDO, PIN_CPLD_TDO)

typedef enum {
	TRANSCEIVER_MODE_OFF = 0,
	TRANSCEIVER_MODE_RX = 1,
	TRANSCEIVER_MODE_TX = 2
} transceiver_mode_t;

void delay(uint32_t duration);

void cpu_clock_init(void);
void cpu_clock_pll1_low_speed(void);
void cpu_clock_pll1_max_speed(void);
void ssp1_init(void);
void ssp1_set_mode_16bit(void);
void ssp1_set_mode_8bit(void);

void pin_setup(void);

#ifdef HACKRF_ONE
void enable_rf_power(void);
void disable_rf_power(void);
#endif

#ifdef __cplusplus
}
#endif

#endif /* __HACKRF_CORE_H */
