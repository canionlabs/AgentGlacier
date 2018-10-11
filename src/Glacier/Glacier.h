#pragma once 

#include "glacier_defines.h"
#include <IRremoteESP8266.h>
#include <IRsend.h>
#include <Arduino.h>


class Glacier {
public:
	Glacier();
	void begin();

	bool isOn();

	int readLDR();

	void powerOn();
	void powerOff();
	void setTurbo();

private:
	IRsend irsend;

	void notifyLed();
	void sendIR(uint16_t *rawCode);
};
