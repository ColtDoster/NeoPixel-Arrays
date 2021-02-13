#include <Adafruit_NeoPixel.h>

Adafruit_NeoPixel strip(64, 6);

int pixel = 0;

void setup() {
strip.begin();
strip.clear();
strip.setBrightness(30);
}


void loop() {
 for(int i = 0; i <strip.numPixels(); i++){
  
    strip.setPixelColor(i, 200,50,50);
   strip.show();
    delay(100);

   }

   for(int i = 0; i <strip.numPixels(); i++){
  
    strip.setPixelColor(i, 0,0,0);
   strip.show();
    delay(100);

   }


}
