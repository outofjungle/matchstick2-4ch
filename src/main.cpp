#include "lights.h"
#include "task.h"
#include "config.h"
#include "env.h"

CRGB leds1[NUM_LEDS];
CRGB leds2[NUM_LEDS];
CRGB leds3[NUM_LEDS];
CRGB leds4[NUM_LEDS];

Lights *lights1 = new Lights(leds1, 1);
Lights *lights2 = new Lights(leds2, 2);
Lights *lights3 = new Lights(leds3, 3);
Lights *lights4 = new Lights(leds4, 4);

Task *tasks[] = {
    lights1,
    lights2,
    lights3,
    lights4,
};

void setup()
{
    delay(1000);
    randomSeed(analogRead(0));

    Serial.begin(115200);

    lights1->Init<LED_PIN1>();
    lights2->Init<LED_PIN2>();
    lights3->Init<LED_PIN3>();
    lights4->Init<LED_PIN4>();

    int size = sizeof(tasks) / sizeof(tasks[0]);
    for (int i = 0; i < size; i++)
    {
        tasks[i]->Setup();
    }
}

void loop()
{
    int size = sizeof(tasks) / sizeof(tasks[0]);
    for (int i = 0; i < size; i++)
    {
        tasks[i]->Tick();
    }
}
