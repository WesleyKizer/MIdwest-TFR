#include "Testing.h"

char c = 'A';



void all_high() {
    state.TFC_1_led_R = 1;
    state.TFC_1_led_G = 1;
    state.TFC_1_led_B = 1;

    state.TFC_2_led_R = 1;
    state.TFC_2_led_G = 1;
    state.TFC_2_led_B = 1;

    state.TFC_3_led_R = 1;
    state.TFC_3_led_G = 1;
    state.TFC_3_led_B = 1;

    state.open_valves_led = 255;

    state.receive_good = 255;
    state.receive_bad = 255;

    state.signal_strength_R = 0;
    state.signal_strength_G = 0;
    state.signal_strength_B = 0;
}

void all_low() {
    state.TFC_1_led_R = 0;
    state.TFC_1_led_G = 0;
    state.TFC_1_led_B = 0;

    state.TFC_2_led_R = 0;
    state.TFC_2_led_G = 0;
    state.TFC_2_led_B = 0;

    state.TFC_3_led_R = 0;
    state.TFC_3_led_G = 0;
    state.TFC_3_led_B = 0;

    state.TFR_led_R = 0;
    state.TFR_led_G = 0;
    state.TFR_led_B = 0;

    state.open_valves_led = 0;

    state.receive_good = 0;
    state.receive_bad = 0;

    state.signal_strength_R = 255;
    state.signal_strength_G = 255;
    state.signal_strength_B = 255;
}


void all_colors() {
    digitalWrite(p_TFC_1_led_R, HIGH);
    digitalWrite(p_TFC_2_led_R, HIGH);
    digitalWrite(p_TFC_3_led_R, HIGH);
    analogWrite(p_signal_strength_R, 0);
    delay(500);
    digitalWrite(p_TFC_1_led_R, LOW);
    digitalWrite(p_TFC_2_led_R, LOW);
    digitalWrite(p_TFC_3_led_R, LOW);
    analogWrite(p_signal_strength_R, 255);
    delay(500);
    digitalWrite(p_TFC_1_led_B, HIGH);
    digitalWrite(p_TFC_2_led_B, HIGH);
    digitalWrite(p_TFC_3_led_B, HIGH);
    analogWrite(p_signal_strength_B, 0);
    analogWrite(p_receive_bad, 255);
    delay(500);
    digitalWrite(p_TFC_1_led_B, LOW);
    digitalWrite(p_TFC_2_led_B, LOW);
    digitalWrite(p_TFC_3_led_B, LOW);
    analogWrite(p_signal_strength_B, 255);
    analogWrite(p_receive_bad, 0);
    delay(500);
    digitalWrite(p_TFC_1_led_G, HIGH);
    digitalWrite(p_TFC_2_led_G, HIGH);
    digitalWrite(p_TFC_3_led_G, HIGH);
    analogWrite(p_signal_strength_G, 0);
    analogWrite(p_open_valves_led, 255);
    analogWrite(p_receive_good, 255);
    delay(500);
    digitalWrite(p_TFC_1_led_G, LOW);
    digitalWrite(p_TFC_2_led_G, LOW);
    digitalWrite(p_TFC_3_led_G, LOW);
    analogWrite(p_signal_strength_G, 255);
    analogWrite(p_open_valves_led, 0);
    analogWrite(p_receive_good, 0);
    delay(500);
}

void alphabet() {
    Xbee.print( c );
    //--- display the character just sent on console ---
//Serial.println( c );
    //--- get the next letter in the alphabet, and reset to ---
    //--- 'A' once we have reached 'Z'.
    c = c + 1;
    if ( c>'Z' )
         c = 'A';
}
