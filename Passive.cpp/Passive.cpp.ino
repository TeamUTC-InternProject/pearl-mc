/*
  passive.cpp - Library for receiving
  signals from the CP. 
*/
#include "Arduino.h"
#include "Passive.h"
#include <SD.h>
#include <arm_math.h>

Passive::Passive()
{
  
}

int Passive::detect(int ADC_val)
{
  int classif_num = classify(ADC_val);
  contactGUI(classif_num);
  return classif_num;
}

int Passive::classifySignal(int ADC_val)
{
  /*Series of if statements here*/
  return 0;  
}

void Passive::fourierTransform()
{
  
}

void Passive::contactGUI(int classif_num)
{
  /*Establish connection with the website or the server?*/
  sdWrite(classif_num);
}

void Passive::sdWrite(int classif_num)
{
  Serial.print("Initializing SD card...");

  if (!SD.begin(4)) {
    Serial.println("initialization failed!");
    while (1);
  }
  Serial.println("initialization done.");

  // open the file. note that only one file can be open at a time,
  // so you have to close this one before opening another.
  myFile = SD.open("test.txt", FILE_WRITE);

  // if the file opened okay, write to it:
  if (myFile) {
    Serial.print("Writing to test.txt...");
    /*Must convert classif_num to string*/
    myFile.println(classif_num);
    // close the file:
    myFile.close();
    Serial.println("done.");
  } else {
    // if the file didn't open, print an error:
    Serial.println("error opening test.txt");
  }

}

