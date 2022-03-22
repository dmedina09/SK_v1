#pragma once

#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID    0x0167
#define PRODUCT_ID   0x169A
#define DEVICE_VER   0x0001
#define MANUFACTURER LogicPGS
#define PRODUCT      SK v1

/* key matrix size */
// SPECIFY NUMBER OF ROWS AND COLUMNS
// DOUBLE NUMBER OF ROWS
#define MATRIX_ROWS  8
#define MATRIX_COLS  6

//PINS FOR ROWS
#define MATRIX_ROW_PINS \
    { D4, C6, D7, E6 }

//PINS FOR COLUMNS
#define MATRIX_COL_PINS \
    { F4, F5, F6, F7, B1, B3 }

// LATENCY??
#define DEBOUNCE 2

/* COL2ROW, ROW2COL */
#define DIODE_DIRECTION COL2ROW

//RGB PIN
//B2 LEFT HAND SK v1 LEDS
//B4 RIGHT HAND SK v1 LEDS
#define RGB_DI_PIN B2

//RGB ENABLE CONFIGURATION
#ifdef RGBLIGHT_ENABLE
#    define RGBLED_NUM 12 // Number of LEDs
#    define RGBLED_SPLIT \
        { 6, 6 }
#    define RGBLIGHT_SPLIT
#endif

#ifdef RGB_MATRIX_ENABLE
#    define RGBLED_NUM       54 // Number of LEDs
#    define DRIVER_LED_TOTAL RGBLED_NUM
#    define RGB_MATRIX_SPLIT \
        { 27, 27 }
#    define SPLIT_TRANSPORT_MIRROR
#endif

//SPLIT HALF COMMUNICATION
#define USE_SERIAL
#define SOFT_SERIAL_PIN D2

#define NO_ACTION_MACRO
#define NO_ACTION_FUNCTION
