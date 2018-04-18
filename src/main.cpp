#include <Arduino.h>

#include "Declarations.h"

#include <Setup.h>
#include <Loop.h>
#include <Testing.h>


SoftwareSerial Xbee(0, 1); // RX, TX
struct led_display_state state;
static char packet[80];
int size = 0;
elapsedMillis t_sinceAquisition;


void setup() {

    pinModes();
    pinMode(13, INPUT);


    Serial.begin(9600);
    Xbee.begin(9600);

    //xbee_connected();   //check if the xbee is physically connected to the arduino
    //xbee_signal();      //check if a signal is being received from the other xbee


    //blink everything and output a feel good success message if the xbee works
    //Serial.println("Serial monitor and Xbee were set up successfully.");
    all_high();
    update_display();
    delay(1000);
    all_low();
    update_display();
    delay(1000);
}


void loop() {

    /*xbee_connected();   //check if the xbee is physically connected to the arduino

    if(xbee_signal()) { //check if a signal is being received from the other xbee and then do stuff
        size = read_packet(Xbee.read(), packet, 80);
        if(size > 0) {      //occurs when a full message exists and can be read

        }
        //while(size >= 0) {        size--;        }

    };*/


    if(Xbee.available() > 0) {
        digitalWrite(12, HIGH);
        digitalWrite(11, HIGH);
        delay(200);
        Serial.println(Xbee.read());
    }
    digitalWrite(12, LOW);
    digitalWrite(11, LOW);
    //all_high();
    //delay(200);

    //all_colors();
    //analogWrite(A1, 255);

    if(Xbee.available() > 0) {
        digitalWrite(p_signal_strength_G, LOW);
        digitalWrite(p_receive_good, HIGH);
        delay(250);
    }
    digitalWrite( p_signal_strength_G, HIGH);
    digitalWrite(p_receive_good, LOW);

    //delay(250);
    //all_low();
    //delay(250);

    /*bool state = digitalRead(13);

    if (state == 1) {
        digitalWrite(p_TFC_1_led_B, HIGH);
        digitalWrite(p_TFC_2_led_B, HIGH);
        delay(250);
    }
    digitalWrite(p_TFC_1_led_B, LOW);
    digitalWrite(p_TFC_2_led_B, LOW);
    delay(250);*/

    alphabet();
    /*all_high();
    update_display();
    delay(400);
    all_low();
    delay(500);*/

}
