#include <Mouse.h>


int responseDelay = 9000;        // response delay of the mouse, in ms



void setup() {
    Mouse.begin();
}

void loop() {


  // move the mouse:
  Mouse.move(1, 1, 0);
  delay(responseDelay);
   delay(responseDelay);
}

