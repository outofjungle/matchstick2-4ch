#include "lights.h"
#include "palettes.h"

#define COOLING 55
#define SPARKING 120

Lights::Lights(CRGB *_leds, u_int8_t index)
{
  leds = _leds;
  paletteList = palettes;

  u_int8_t len = sizeof(paletteList) / sizeof(TProgmemRGBGradientPalettePtr);
  if (index > len)
  {
    index = len;
  }
}

void Lights::Setup()
{
  Serial.println("Lights starting");

  FastLED.addLeds<CHIPSET, LED_PIN1, COLOR_ORDER>(leds, NUM_LEDS);
  FastLED.setBrightness(brightness);

  currentPalette = paletteList[5];
}

void Lights::Tick()
{
  curtime = millis();
  if (curtime - prevtime >= (1000 / FPS))
  {
    prevtime = curtime;

    Fire2012WithPalette();

    FastLED.show();
  }
}

void Lights::Fire2012WithPalette()
{
  static uint8_t heat[NUM_LEDS];

  for (int i = 0; i < NUM_LEDS; i++)
  {
    heat[i] = qsub8(heat[i], random8(0, ((COOLING * 10) / NUM_LEDS) + 2));
  }

  for (int k = NUM_LEDS - 1; k >= 2; k--)
  {
    heat[k] = (heat[k - 1] + heat[k - 2] + heat[k - 2]) / 3;
  }

  if (random8() < SPARKING)
  {
    int y = random8(7);
    heat[y] = qadd8(heat[y], random8(160, 255));
  }

  for (int j = 0; j < NUM_LEDS; j++)
  {
    uint8_t colorindex = scale8(heat[j], 240);
    CRGB color = ColorFromPalette(currentPalette, colorindex);
    int pixelnumber;
    if (false)
    {
      pixelnumber = (NUM_LEDS - 1) - j;
    }
    else
    {
      pixelnumber = j;
    }
    leds[pixelnumber] = color;
  }
}
