#include <Adafruit_NeoPixel.h>

Adafruit_NeoPixel strip(64, 6);

int pixel = 0;

void setup() {
strip.begin();
strip.clear();
strip.setBrightness(50);
}


void loop() {
strip.setPixelColor(pixel, 200,200,200);
strip.show();
delay(500);
strip.setPixelColor(pixel, 0,0,0);
strip.show();
delay(500);

}
