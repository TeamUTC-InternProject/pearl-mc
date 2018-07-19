/*
  passive.h - Library for receiving
  signals from the CP. 
*/
#ifndef Passive_h
#define Passive_h
#include "Arduino.h"
#include <SD.h>
#include <arm_math.h>

class Passive
{
  public:
    Passive();
    int detect(int ADC_val);
    int classifySignal(int ADC_val);
    void fourierTransform();
    void contactGUI(int classif_num);
    void sdWrite(int classif_num);
};

#endif
