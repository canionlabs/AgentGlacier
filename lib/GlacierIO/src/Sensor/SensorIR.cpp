// #include "SensorIR.h"


// namespace glacier { namespace sensor {

//     SensorIR::SensorIR() : irsend(G_OUTPUT_IR) {}

//     void SensorIR::begin() {
//         irsend.begin();
//         pinMode(G_OUTPUT_LED, OUTPUT);
//     }

//     void SensorIR::powerOn() {
//         irsend.sendRaw(_powerOnSignal, SIGNAL_ARRAY_SIZE, SIGNAL_FREQUENCY);
//     }

//     void SensorIR::powerOff() {
//         irsend.sendRaw(_powerOffSignal, SIGNAL_ARRAY_SIZE, SIGNAL_FREQUENCY);
//     }

// } }