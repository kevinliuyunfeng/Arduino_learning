#include "Morse.h"
#define _dottime 500
int led = 8;
char c;

Morse morse(led);

void setup() {
    pinMode(led, OUTPUT);
    Serial.begin(9600);
}

void loop() {
    if(Serial.available())
    {
      c = Serial.read();
      morse.Morse_Led(c);
    }
}
