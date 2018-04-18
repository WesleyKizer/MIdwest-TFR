#include "Xbee.h"

char packet[80] = {0,0,1,1,0,1,0,0,0,0,1,1,1,0,1,0,1,0,1,0,1,1,1,0,0,1,0,1,1};

void setup(){
  Xbee.begin(9600);
}

void loop(){
 for(int i = 0; i < 80; i++)
    Xbee.write(packet[i]);
}
