#include <Adafruit_NeoPixel.h>
#include "checker.h"

Adafruit_NeoPixel strip(64, 6);

int colors[2][3]{
  {0,0,0},
  {200,50,50},
};

int whichFrame = 0;

void setup() {
strip.begin();
strip.clear();
strip.setBrightness(30);
}


void loop() {
 for(int i = 0; i <strip.numPixels(); i++){
      int pixelAddress= pixelMap[i];

      int red = colors[pixelAddress][0];
      int green = colors[pixelAddress][1];
      int blue = colors[pixelAddress][2];
      strip.setPixelColor(i,red,green,blue);
   }

    strip.show();
    delay(100);



}
