#include <Adafruit_NeoPixel.h>

#define PIN 38
#define NUMPIXELS 1

Adafruit_NeoPixel pixels(NUMPIXELS, PIN, NEO_GRB + NEO_KHZ800);

void setup() {
  pixels.begin();
}

void loop() {
  pixels.setPixelColor(0, pixels.Color(255, 0, 0)); // Red ON
  pixels.show();
  delay(1000);

  pixels.setPixelColor(0, pixels.Color(0, 0, 0)); // OFF
  pixels.show();
  delay(1000);
}
