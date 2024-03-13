#ifndef __INC_ENV_H
#define __INC_ENV_H

#ifndef BUILD_ENV_NAME
#error "Add -D BUILD_ENV_NAME=$PIOENV to platformio.ini build_flags"
#else
#define pico32 0x10
#endif

#if BUILD_ENV_NAME == pico32
#define _LED_PIN1 26
#define _LED_PIN2 18
#define _LED_PIN3 25
#define _LED_PIN4 19
#endif

#define _NUM_LEDS 200
#define _BRIGHTNESS 200

#endif
