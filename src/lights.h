#ifndef __INC_LIGHTS_H
#define __INC_LIGHTS_H

#include <FastLED.h>
#include <vector>
#include "env.h"

#define LED_PIN1 _LED_PIN1
#define LED_PIN2 _LED_PIN2
#define LED_PIN3 _LED_PIN3
#define LED_PIN4 _LED_PIN4
#define NUM_LEDS _NUM_LEDS
#define COLOR_ORDER GRB
#define CHIPSET WS2811

#include "task.h"

class Lights : public Task
{
  CRGB *leds;
  // TODO: Pass these into the constructor
  unsigned int FPS = 100;
  unsigned int hue = 200;
  unsigned int curpattern = 0;
  unsigned int brightness = _BRIGHTNESS;

  std::vector<std::function<void()>> patterns;

  unsigned long curtime;
  unsigned long prevtime = millis();

  CRGBPalette16 currentPalette;
  CRGBPalette16 targetPalette;
  uint8_t targetPaletteNumber = 0;
  const TProgmemRGBGradientPalettePtr *paletteList;

public:
  Lights(CRGB *_leds, u_int8_t index);

  template <unsigned char LED_PIN>
  void Init()
  {
    FastLED.addLeds<CHIPSET, LED_PIN, COLOR_ORDER>(leds, NUM_LEDS);
  }

  void Setup();
  void Tick();
  void Fire2012WithPalette();
};

#endif
