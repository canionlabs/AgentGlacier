#pragma once

#include "Arduino.h"

#include <pinout_defines.h>
#include <signal_defines.h>

#include <IRremoteESP8266.h>
#include <IRsend.h>


namespace glacier { namespace ir {
    class IRTransmitter
    {
        public:
        IRTransmitter();

        void begin();
        void powerOn();
        void powerOff();

        int saz = SIGNAL_ARRAY_SIZE;
        int sf = SIGNAL_FREQUENCY;

        private:
        IRsend irsend;

        uint16_t _powerOnSignal[SIGNAL_ARRAY_SIZE] = IR_POWER_ON;
        uint16_t _powerOffSignal[SIGNAL_ARRAY_SIZE] = IR_POWER_OFF;
    };
}}