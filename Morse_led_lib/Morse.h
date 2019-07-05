#ifndef _MORSE_H
#define _MORSE_H
class Morse
{
  public:
    Morse(int pin);
    void dot();
    void dash();
    void Morse_Led(char c);
  private:
    int _pin;
};
#endif /*_MORSE_H*/
