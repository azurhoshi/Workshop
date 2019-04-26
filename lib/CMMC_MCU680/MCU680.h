#ifndef CMMC_MCU680_H
#define CMMC_MCU680_H

#include <Arduino.h>
#include <CMMC_Module.h>

#include <Wire.h>

class CMMC_MCU680: public CMMC_Module {
  protected:
    int counter = 0;
  float Temperature , Humidity;
  uint32_t Gas;
  uint32_t Pressure;
  uint16_t IAQ;
  int16_t  Altitude;
  uint8_t IAQ_accuracy;
  public:
    CMMC_MCU680();
    void setup();
    void loop();
    void configLoop();
    void configSetup();
    int getCounter();

};

#endif
