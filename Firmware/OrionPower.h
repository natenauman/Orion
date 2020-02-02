#ifndef OrionPower_h
#define OrionPower_h

//Standard Arduino libraries
#include <Arduino.h>

class OrionPower
{
  private:
  
  
  public:
    bool isCharging();
    uint16_t getBatteryVoltage();
};

#endif
