// #pragma once

// #include "Sensor.h"
// #include <pinout_defines.h>
// #include <signal_defines.h>

// #include <IRremoteESP8266.h>
// #include <IRsend.h>


// namespace glacier { namespace sensor {
//     class SensorIR : public Sensor
//     {
//         public:
//         SensorIR();

//         void begin() override;

//         void powerOn();
//         void powerOff();

//         private:
//         IRsend irsend;

//         uint16_t _powerOnSignal[SIGNAL_ARRAY_SIZE] = IR_POWER_ON;
//         uint16_t _powerOffSignal[SIGNAL_ARRAY_SIZE] = IR_POWER_OFF;
//     };
// }}