#ifndef MBED_MAIN_H
#define MBED_MAIN_H

#include "SPI_TFT_ILI9341.h"
//#include "FT6206.h"
#include "HD44780_12x20.h"
#include "LCD6x8.h"

#define I2C1_SCL     PB_8
#define I2C1_SDA     PB_9
#define I2C2_SCL     PB_10
#define I2C2_SDA     PB_11
#define I2C4_SCL     PF_14
#define I2C4_SDA     PF_15

#define BAUD_RATE       230400

// NUCLEO-F767ZI
#define USB_TX          SERIAL_TX   // PD_8 USART3 TX
#define USB_RX          SERIAL_RX   // PD_9 USART3 RX

// TFT
#define PIN_SCLK_TFT        PB_3    // PE_12       // SPI4_SCLK D13 Blue
#define PIN_MISO_TFT        PB_4    // PE_13       // SPI4_MISO D12 Yellow
#define PIN_MOSI_TFT        PB_5    // PE_14       // SPI4_MOSI D11 Green
#define PIN_CS_TFT          PF_12   // D7      // D10 Orange, Chip select pin
#define PIN_DC_TFT          PE_13    // D6      // D9 Bown, Data/Command select pin.

#define PIN_CS_SDCARD_TFT   PF_13    // D4 Orange

#define PIN_RESET_TFT       D5          // D8 Gray
#define PIN_BL_TFT          D4
#define PIN_CS_SD_TFT       PG_9        // D4 uSD CS (not used, now)

#define PIN_SCL_FT6206  PF_14     // D15  A5 Blue
#define PIN_SDA_FT6206  PF_15     // D14  A4 Purple
#define PIN_INT_FT6206  PF_12      // D7  White

#define PORTRAIT        0
#define LANDSCAPE       1

#define FFT_MAX_Y 79;

#endif
