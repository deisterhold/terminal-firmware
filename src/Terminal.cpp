#include "Terminal.h"

void Terminal::begin(String api_key) {
    _api_key = api_key;

    pinMode(_interrupt_pin, INPUT);
    pinMode(_reset_pin, INPUT_PULLUP);

    attachInterrupt(_reset_pin, std::bind(&Terminal::isr, this), RISING);
}

void Terminal::isr() {
    
}

void Terminal::loop() {

}