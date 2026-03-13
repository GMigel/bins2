#include "gui.h"
#include "RotaryEncoder.h"
#include "stdint.h"

gui_state_t gui_state = {0.0f, };
volatile uint32_t systime = 0;
//extern RotaryEncoder::listener_t enc_brg;
//RotaryEncoder encoder(enc_brg);
//
//void dummy_hold() {debug_print("dummy hold\r");};
//void dummy_timeout() {debug_print("dummy timeout\r");};
//
//void brg_rotate(int8_t delta);
//void brg_click();
//void brg_hold();
//
//RotaryEncoder::listener_t enc_brg = {brg_rotate, brg_click, brg_hold, dummy_timeout};
