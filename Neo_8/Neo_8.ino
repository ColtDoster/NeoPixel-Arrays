#include <Adafruit_NeoPixel.h>

Adafruit_NeoPixel strip(64, 6);
 
int pixel = 0;
int color = 0;


void setup() {
strip.begin();
strip.clear();
strip.setBrightness(30);
}


void loop() {

  uint16_t i;

  color++;
 
    for(i=0; i< strip.numPixels(); i++) {
      strip.setPixelColor(i, Wheel(color));
    }

  
    strip.show();
    delay(5);
}

uint32_t Wheel(byte WheelPos) {
  WheelPos = 255 - WheelPos;
  if(WheelPos < 85) {return strip.Color(255 - WheelPos * 3, 0, WheelPos * 3);}
  if(WheelPos < 170) {WheelPos -= 85; return strip.Color(0, WheelPos * 3, 255 - WheelPos * 3);}
  WheelPos -= 170;  return strip.Color(WheelPos * 3, 255 - WheelPos * 3, 0);
}
