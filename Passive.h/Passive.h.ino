/*
  passive.h - Library for receiving
  signals from the CP. 
*/
#ifndef Passive_h
#define Passive_h
#include "Arduino.h"

class Passive
{
  public:
    Passive(int );
    void processSignal();
    void fourierTransform();
    void sendDataToGUI();
  private:
    int _pin;
};

#endif
