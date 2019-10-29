#include "IRTransmitter.h"


namespace glacier { namespace ir {

    IRTransmitter::IRTransmitter() : irsend(G_OUTPUT_IR) {}

    void IRTransmitter::begin() {
        irsend.begin();
    }

    void IRTransmitter::powerOn() {
        irsend.sendRaw(_powerOnSignal, SIGNAL_ARRAY_SIZE, SIGNAL_FREQUENCY);
    }

    void IRTransmitter::powerOff() {
        irsend.sendRaw(_powerOffSignal, SIGNAL_ARRAY_SIZE, SIGNAL_FREQUENCY);
    }

} }