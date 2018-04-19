#ifndef _DEFINITIONS_H_
#define _DEFINITIONS_H_

#include <Arduino.h>
#include <SoftwareSerial.h>
#include <elapsedMillis.h>

struct TFC_data {
    bool IMU_connected = 0;
    bool TFC_L_connected = 0;
    bool TFC_R_connected = 0;

    int timestamp = 0;//the timestamp of when the packet was sent

    float current_direction = 0.0;
    float altitude = 0.0;
    float pressure = 0.0;
    float temp = 0.0;
    float roll = 0.0;
    float pitch = 0.0;
    float yaw = 0.0;
    float acceleration = 0.0;
    float velocity = 0.0;

    float error = 0.0;
    float last_error = 0.0;
    float integral_error = 0.0;
    float omega_reading = 0.0;
    float d_error = 0.0;
};

struct global_data {
    float setpoint = 0.0;
    float last_setpoint = 0.0;
    int hold_time = 0;
    int current_time = 0; //the synced timing
    //add time variable for timing variable stuff

    bool liftoff = 0;
    bool burnout = 0;
    bool apogee = 0;
    bool falling = 0;
    bool emergency = 0;

    bool is_done = 0;
    bool roll_direction = 0;

    bool open_valves = 0;

    bool TFC_1_connected = 0;
    bool TFC_2_connected = 0;
    bool TFC_3_connected = 0;
};

extern struct global_data global;
extern struct TFC_data TFC1, TFC2, TFC3;
extern SoftwareSerial Xbee;
extern struct led_display_state state;


extern elapsedMillis t_sinceAquisition;


#endif
