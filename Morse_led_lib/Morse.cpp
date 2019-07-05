#include "Arduino.h"
#include "Morse.h"

Morse::Morse(int pin)
{
	pinMode(pin,OUTPUT);
	_pin=pin;
}

void Morse::dot()
{
	digitalWrite(_pin,HIGH);
	delay(250);
	digitalWrite(_pin,LOW);
	delay(250);
}

void Morse::dash()
{
	digitalWrite(_pin,HIGH);
	delay(1000);
	digitalWrite(_pin,LOW);
	delay(250);
}

void Morse:: Morse_Led(char c)
{
  switch(c){
    case 'a':
    case 'A':dot();dash();break;
    case 'b':
    case 'B':dash();dot();dot();dot();break;
    case 'c':
    case 'C':dash();dot();dash();dot();break;
    case 'd':
    case 'D':dash();dot();dot();break;
    case 'e':
    case 'E':dot();break;
    case 'f':
    case 'F':dot();dot();dash();dot();break;
    case 'g':
    case 'G':dash();dash();dot();break;
    case 'h':
    case 'H':dot();dot();dot();dot();break;
    case 'i':
    case 'I':dot();dot();break;
    case 'j':
    case 'J':dot();dash();dash();dash();break;
    case 'k':
    case 'K':dash();dot();dash();break;
    case 'l':
    case 'L':dot();dash();dot();dot();break;
    case 'm':
    case 'M':dash();dash();break;
    case 'n':
    case 'N':dash();dot();break;
    case 'o':
    case 'O':dash();dash();dash();break;
    case 'p':
    case 'P':dot();dash();dash();dot();break;
    case 'q':
    case 'Q':dash();dash();dot();dash();break;
    case 'r':
    case 'R':dot();dash();dot();break;
    case 's':
    case 'S':dot();dash();dot();break;
    case 't':
    case 'T':dash();break;
    case 'u':
    case 'U':dot();dot();dash();break;
    case 'v':
    case 'V':dot();dot();dot();dash();break;
    case 'w':
    case 'W':dot();dash();dash();break;
    case 'x':
    case 'X':dash();dot();dot();dash();break;
    case 'y':
    case 'Y':dash();dot();dash();dash();break;
    case 'z':
    case 'Z':dash();dash();dot();dot();break;
    case ' ':break;
    case '\n':break;
  };
}
