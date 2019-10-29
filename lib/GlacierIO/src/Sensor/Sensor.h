#pragma once

#include <map>
#include "Arduino.h"


namespace glacier { namespace sensor {

  class Sensor {
  public:
    Sensor();

    virtual void begin() = 0;
    virtual void service() = 0;

    float read(int idx);
    void setData(int pin, float data);

  protected:
    std::map<int, float> info;
  };
}}