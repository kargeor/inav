/*
 * This file is part of Cleanflight.
 *
 * Cleanflight is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * Cleanflight is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with Cleanflight.  If not, see <http://www.gnu.org/licenses/>.
 */

#pragma once

#define TARGET_BOARD_IDENTIFIER "NOX1"

#define USBD_PRODUCT_STRING  "NoxF4V1"

#define LED0                    PA4

#define BEEPER                  PC13
#define BEEPER_INVERTED

// *************** Gyro & ACC **********************
#define USE_SPI

#define USE_SPI_DEVICE_1
#define SPI1_SCK_PIN          PB3
#define SPI1_MISO_PIN   	    PB4
#define SPI1_MOSI_PIN   	    PB5

#define USE_SPI_DEVICE_2
#define SPI2_SCK_PIN          PB13
#define SPI2_MISO_PIN   	    PB14
#define SPI2_MOSI_PIN   	    PB15

#define USE_EXTI
#define GYRO_INT_EXTI            PA8
#define USE_MPU_DATA_READY_SIGNAL

#define USE_GYRO
#define USE_GYRO_MPU6000

#define USE_ACC
#define USE_ACC_MPU6000

#define MPU6000_SPI_BUS BUS_SPI2
#define MPU6000_CS_PIN PB12


// *************** OSD *****************************

#define USE_OSD
#define USE_MAX7456
#define MAX7456_SPI_BUS         BUS_SPI2
#define MAX7456_CS_PIN          PA10

// *************** UART *****************************
#define USE_VCP
// #define VBUS_SENSING_PIN        PC15
// #define VBUS_SENSING_ENABLED

#define USE_UART1
#define UART1_TX_PIN            PB6
#define UART1_RX_PIN            PB7

#define USE_UART2
#define UART2_TX_PIN            PA2
#define UART2_RX_PIN            PA3

// VCP, USART1, USART2
#define SERIAL_PORT_COUNT       3

#define DEFAULT_RX_TYPE         RX_TYPE_SERIAL
#define SERIALRX_PROVIDER       SERIALRX_SBUS
#define SERIALRX_UART           SERIAL_PORT_USART1

// *************** I2C  ********************
// #define USE_I2C
// #define USE_I2C_DEVICE_1
// #define I2C1_SCL                PB8
// #define I2C1_SDA                PB9
// 
// #define DEFAULT_I2C_BUS         BUS_I2C1

// HACK!
#define I2C2_SDA PB10

///#define USE_BARO
// #define BARO_I2C_BUS            BUS_I2C1
///#define USE_BARO_BMP280
// #define USE_BARO_MS5611
// #define USE_BARO_BMP085

// #define USE_MAG
// #define MAG_I2C_BUS             BUS_I2C1
// #define USE_MAG_HMC5883
// #define USE_MAG_QMC5883
// #define USE_MAG_IST8310
// #define USE_MAG_MAG3110
// #define USE_MAG_LIS3MDL

// *************** ADC *****************************

#define USE_ADC
#define ADC_INSTANCE                ADC1
#define ADC1_DMA_STREAM             DMA2_Stream0

#define ADC_CHANNEL_1_PIN           PA5
#define VBAT_ADC_CHANNEL            ADC_CHN_1

// *************** LED2812 ************************
/// #define USE_LED_STRIP
/// #define WS2811_PIN                      PA8
/// #define WS2811_DMA_HANDLER_IDENTIFER    DMA2_ST1_HANDLER
/// #define WS2811_DMA_STREAM               DMA2_Stream1
/// #define WS2811_DMA_CHANNEL              DMA_Channel_6

// ***************  OTHERS *************************
#define DEFAULT_FEATURES        (FEATURE_TX_PROF_SEL | FEATURE_OSD | FEATURE_VBAT | FEATURE_TELEMETRY)


#define USE_SERIAL_4WAY_BLHELI_INTERFACE


#define TARGET_IO_PORTA (0xffff & ~(BIT(14)|BIT(13)))
#define TARGET_IO_PORTB (0xffff & ~(BIT(2)|BIT(11)))
#define TARGET_IO_PORTC (BIT(13)|BIT(14)|BIT(15))


#define MAX_PWM_OUTPUT_PORTS       4




