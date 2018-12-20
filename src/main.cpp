
#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>
#include <Arduino.h>
#include <array>

#include <Glacier/Glacier.h>


WidgetLED virtualLED(V4);

Glacier glacier;
BlynkTimer timer;


// Auth Settings
char auth[] = "senhadanet2018";
char ssid[] = "Ed. The Doors - Touch Me";
char pass[] = "senhadanet2018";
// char ssid[] = "d0f2a4";
// char pass[] = "";

int lastStatus[5] = {};
int indexToSearch = 0;

BLYNK_WRITE(V0) {
    glacier.powerOn();
}

BLYNK_WRITE(V1) {
    glacier.powerOff();
}

void sendStatus() {
    Blynk.virtualWrite(V9, glacier.readLDR());
    int iTrue = 0;
    int iFalse = 0;

    if (indexToSearch == 5) {
        for (int n=0; n < indexToSearch; n++) {
            if (lastStatus[n] == 1) {
                iTrue += 1;
            } else {
                iFalse += 1;
            }
        }

        int maxStatus = max(iTrue, iFalse);
        if (maxStatus == iTrue) {
            virtualLED.on();
        } else {
            virtualLED.off();
        }

        indexToSearch = 0;

    } else {
        lastStatus[indexToSearch] = glacier.isOn();
        indexToSearch += 1;
    }
}

void setup() {
    Serial.begin(9600);
    Blynk.begin(auth, ssid, pass);
    glacier.begin();
    timer.setInterval(2000L, sendStatus);
}

void loop() {
    Blynk.run();
    timer.run();
}
