#include <Arduino.h>
#include "Declarations.h"
#include <Testing.h>
#include <Xbee.h>
#include <newParsing.h>



void TFC_receive();
void ground_transmit();
void sd_record();
void LED_update();
void process_input();

SoftwareSerial Xbee(0, 1); // RX, TX

char packet[80];
int size = 0;

struct global_data global;
struct TFC_data TFC1, TFC2, TFC3;

elapsedMillis T_sincetransmit;
elapsedMillis T_sinceRecorded;
elapsedMillis T_sinceTFC1;
elapsedMillis T_sinceTFC2;
elapsedMillis T_sinceTFC3;
elapsedMillis T_sinceGlobal;


void setup() {
    //setup pinmodes here
    //setup TFC connection here
    Xbee.begin(9600);
    //add function to setup sd card here
    //add function to print sd card header stuff here
}


void loop() {

    if(Xbee.peek() > 0) { //check if a signal is being received from the other xbee and then do stuff, currently only useful for the emergency state
        size = read_packet(Xbee.read(), packet, 80);
        if(size > 0) {      //occurs when a full message exists and can be read
            newParse(packet);
            process_input();
        }
    }


    TFC_receive();
    LED_update();

    sd_record();

    ground_transmit();


    /*if(Xbee.available() > 0) {
        Serial.write(Xbee.read());
    }

    if(T_sincetransmit >= 90) {
        alphabet();
        T_sincetransmit = 0;
    }*/
}



void process_input() {

}


void TFC_receive() {

}


void LED_update() {

}


void sd_record() {
    //::TODO add fields to write to sd card that shows whether the state has actually been updated since the last time
    if(T_sinceRecorded >= redcordRate_T) {
        //add a data logging function here, should write the state of all structs
        T_sinceRecorded = 0;
    }
}


void ground_transmit() {
    if(T_sinceTFC1 >= transmitRate_T) {
        //transmit function here
        T_sinceTFC1 = 0;
    }
    if(T_sinceTFC2 >= transmitRate_T) {
        //transmit function here
        T_sinceTFC2 = 0;
    }
    if(T_sinceTFC3 >= transmitRate_T) {
        //transmit function here
        T_sinceTFC3 = 0;
    }
    if(T_sinceGlobal >= transmitRate_T) {
        //transmit function here
        T_sinceGlobal = 0;
    }
}
