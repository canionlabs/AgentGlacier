#include "Sensor.h"


namespace glacier { namespace sensor {
    Sensor::Sensor() {}

    void Sensor::setData(int pin, float data)
    {
        info[pin] = data;
    }

    float Sensor::read(int idx)
    {
        return info[idx];
    }
}}