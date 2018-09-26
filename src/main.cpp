
#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>
#include <Arduino.h>

#include <Glacier/Glacier.h>

Glacier glacier;

char auth[] = "1b1c946ad73c4d38800d7685651c9491";
char ssid[] = "Venal Ninja Labs";
char pass[] = "Venal@2016";

// char ssid[] = "d0f2a4";
// char pass[] = "";


BLYNK_WRITE(V0) {
	glacier.powerOn();
}

BLYNK_WRITE(V1) {
	glacier.powerOff();
}

void setup() {
	Serial.begin(9600);
  	Blynk.begin(auth, ssid, pass, "git.canionlabs.io", 8080);
  	glacier.begin();
}

void loop() {
	Blynk.run();
}

