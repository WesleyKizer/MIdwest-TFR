#include <Arduino.h>

#include "Declarations.h"

#include <Setup.h>
#include <Loop.h>
#include <Testing.h>

/////////////////////////////////////////////////
char stuff[80] = {99,9,9,99,99,1,0,0,0,0,1,1,1,0,1,0,1,0,1,0,1,1,1,0,0,1,0,1,1};
////////////////////////////////////////




SoftwareSerial Xbee(0, 1); // RX, TX

static char packet[80];
int size = 0;
elapsedMillis t_sinceAquisition;


void setup() {
    Xbee.begin(9600);
}


void loop() {

    /*xbee_connected();   //check if the xbee is physically connected to the arduino

    if(xbee_signal()) { //check if a signal is being received from the other xbee and then do stuff
        size = read_packet(Xbee.read(), packet, 80);
        if(size > 0) {      //occurs when a full message exists and can be read

        }
        //while(size >= 0) {        size--;        }

    };*/


    if(Xbee.peek() > 0) {
            Serial.write(Xbee.read());
    }

}
