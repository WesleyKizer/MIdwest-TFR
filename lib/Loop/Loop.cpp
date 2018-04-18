#include "Loop.h"


void xbee_tfc() {};
void xbee_switch() {};
void xbee_activeroll() {};




////LED RELATED FUNCTIONS////

void update_display() {
    digitalWrite(p_TFC_1_led_R, state.TFC_1_led_R);
    digitalWrite(p_TFC_1_led_G, state.TFC_1_led_G);
    digitalWrite(p_TFC_1_led_B, state.TFC_1_led_B);

    digitalWrite(p_TFC_2_led_R, state.TFC_2_led_R);
    digitalWrite(p_TFC_2_led_G, state.TFC_2_led_G);
    digitalWrite(p_TFC_2_led_B, state.TFC_2_led_B);

    digitalWrite(p_TFC_3_led_R, state.TFC_3_led_R);
    digitalWrite(p_TFC_3_led_G, state.TFC_3_led_G);
    digitalWrite(p_TFC_3_led_B, state.TFC_3_led_B);

    analogWrite(p_open_valves_led, state.open_valves_led);

    analogWrite(p_receive_good, state.receive_good);
    analogWrite(p_receive_bad, state.receive_bad);

    analogWrite(p_signal_strength_R, state.signal_strength_R);
    analogWrite(p_signal_strength_G, state.signal_strength_G);
    analogWrite(p_signal_strength_B, state.signal_strength_B);
}

void state_no_signal() {
    state.TFC_1_led_R = 0;
    state.TFC_1_led_G = 0;
    state.TFC_1_led_B = 1;

    state.TFC_2_led_R = 0;
    state.TFC_2_led_G = 0;
    state.TFC_2_led_B = 1;

    state.TFC_3_led_R = 0;
    state.TFC_3_led_G = 0;
    state.TFC_3_led_B = 1;

    state.open_valves_led = 0;

    state.receive_good = 0;
    state.receive_bad = 0;

    state.signal_strength_R = 0;
    state.signal_strength_G = 0;
    state.signal_strength_B = 1;
}
