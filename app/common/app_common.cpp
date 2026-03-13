#include "gui.h"
#include "RotaryEncoder.h"
#include "stdint.h"

extern RotaryEncoder::listener_t enc_brg;
gui_state_t gui_state = {0.0f, };
RotaryEncoder encoder(enc_brg);
volatile uint32_t systime = 0;
