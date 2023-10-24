#include "Arduino_LED_Matrix.h"
#include "animation.h"

ArduinoLEDMatrix matrix;

const unsigned long interval = 33.33;

void setup() {
  // you can also load frames at runtime, without stopping the refresh
  matrix.loadSequence(animation);
  matrix.begin();
  // turn on autoscroll to avoid calling next() to show the next frame; the paramenter is in milliseconds
  matrix.autoscroll(33);
  matrix.play(true);
}

void loop() {
}
