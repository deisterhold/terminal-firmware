#ifndef __TERMINAL_H__
#define __TERMINAL_H__

#include <Arduino.h>
#include <FunctionalInterrupt.h>
#include <WString.h>

class Terminal
{
    private:
        uint8_t _reset_pin;
        uint8_t _interrupt_pin;
        String _api_key;
    public:
        void begin(String api_key);
        void isr();
        void loop();
};


#endif