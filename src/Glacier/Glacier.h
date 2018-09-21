#ifndef YOUR_NAME_INCLUDE
#define YOUR_NAME_INCLUDE

#include "glacier_defines.h"
#include <IRremoteESP8266.h>
#include <IRsend.h>
#include <Arduino.h>


class Glacier {
public:
	Glacier();
	void begin();

	bool getStatus();

	void powerOn();
	void powerOff();
	void setTurbo();

private:
	IRsend irsend;

	bool powerStatus;

	void notifyLed();
	void sendIR(uint16_t *rawCode);
};

#endif