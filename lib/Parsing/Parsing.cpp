#include <stdlib.h>
#include <String.h>
#include "Parsing.h"

using namespace std;

/*
const int datSize = 10;
const int numFDataPoints = 16;
const int numBDataPoints = 12;

void parseData(char packet[]){
  int count = 0; //counter needed to keep track of char array's position
  float fdataArr[numFDataPoints]; //creates an array to hold all float values
  bool bDataArr[numBDataPoints]; //creates an array to hold all bool values
  char* cap = new char[datSize]; //dynamic array needed to hold character bytes to be converted to usable data types
  float fdata; //creates a float to temporarily hold converted data
  for(int i = 0; i < numFDataPoints; i++){ //loops through all float data and stores it in fdataArr
    setDataFloat(packet, fdata, count, cap);
    fdataArr[i] = fdata;
    clearData(cap);
  }
  bool bdata; //creates a boolean variable to temporarily hold bool status
  for(int i = 0; i < numBDataPoints; i++){ //loops through all bool data and stores it in bDataArr
    setDataBool(packet, bdata, count, cap);
    bDataArr[i] = bdata;
    clearData(cap);
  }
  int hTime; //creates variable to hold data value
  setIntData(packet, hTime, count, cap); //takes data from the packet and stores it
  sendDatTFC(fdataArr, bDataArr, hTime); //takes all of the data collected and stores in the respective teensy struct
}

void setDataFloat(char packet[], float& fdata, int& count, char* pointer){
  int actCount = 0;
  while(packet[count] != ','){
    pointer[actCount] = packet[count];
    count++;
    actCount++;
  }
  fdata = atof(pointer);
}

void clearData(char* pointer){
for(int i = 0; i < datSize; i++)
  pointer[i] = '\0';
}

void setDataBool(char packet[], bool& bdata, int& count, char* pointer){
  int actCount = 0;
  while(packet[count] != ','){
    pointer[actCount] = packet[count];
    count++;
    actCount++;
  }                             //all boolean values will theoretically be
  if(pointer[actCount] == 'T') //returned as single characters so I figured
    bdata = 1;                   //it'd just be easiest to use the same char
  else if(pointer[actCount] == 'F')     //array
    bdata = 0;
}

void setIntData(char packet[], int& hTime, int& count, char* pointer){
  int actCount = 0;
  while(packet[count] != '>'){
    pointer[actCount] = packet[count];
    count++;
    actCount++;
  }
  hTime = atoi(pointer);
}

void sendDatTFC(float fdataArr[], bool bDataArr[], int hTime){
  TFC1.setpoint = fdataArr[0];
  TFC1.direction = fdataArr[1];
  TFC1.altitude = fdataArr[2];
  TFC1.pressure = fdataArr[3];
  TFC1.temp = fdataArr[4];
  TFC1.roll = fdataArr[5];
  TFC1.pitch = fdataArr[6];
  TFC1.yaw = fdataArr[7];
  TFC1.acceleration = fdataArr[8];
  TFC1.velocity = fdataArr[9];
  TFC1.last_setpoint = fdataArr[10];
  TFC1.error = fdataArr[11];
  TFC1.last_error = fdataArr[12];
  TFC1.integral_error = fdataArr[13];
  TFC1.omega_reading = fdataArr[14];
  TFC1.d_error = fdataArr[15];
  TFC1.is_done = bDataArr[0];
  TFC1.roll_direction = bDataArr[1];
  TFC1.liftoff = bDataArr[2];
  TFC1.burnout = bDataArr[3];
  TFC1.apogee = bDataArr[4];
  TFC1.emergency = bDataArr[5];
  TFC1.IMU_1 = bDataArr[6];
  TFC1.IMU_2 = bDataArr[7];
  TFC1.IMU_3 = bDataArr[8];
  TFC1.TFC_1 = bDataArr[9];
  TFC1.TFC_2 = bDataArr[10];
  TFC1.TFC_3 = bDataArr[11];
  TFC1.hold_time = hTime;
}
*/
