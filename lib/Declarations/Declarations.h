#ifndef _DEFINITIONS_H_
#define _DEFINITIONS_H_

#include <Arduino.h>
#include <SoftwareSerial.h>
#include <elapsedMillis.h>




extern SoftwareSerial Xbee;
extern struct led_display_state state;


extern elapsedMillis t_sinceAquisition;


#endif
