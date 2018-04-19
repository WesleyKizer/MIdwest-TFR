#if !defined PARSING_H
#define PARSING_H


#include "Declarations.h"

/*struct TFC{
float setpoint, direction, altitude, pressure, temp, roll, pitch, yaw,
acceleration, velocity, last_setpoint, error, last_error,integral_error,
omega_reading, d_error;
int hold_time;
bool is_done, roll_direction, liftoff, burnout, apogee, emergency, IMU_1,
IMU_2, IMU_3, TFC_1, TFC_2, TFC_3;
};*/

//static struct TFC TFC1, TFC2, TFC3;


void parseData(char packet[]);
void setDataFloat(char packet[], float& fdata, int& count, char*);
void clearData(char*);
void setDataBool(char packet[], bool& bdata, int& count, char*);
void setIntData(char packet[], int& hTime, int& count, char*);
void sendDatTFC(float fdataArr[], bool bDataArr[], int);

#endif
