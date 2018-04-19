#include "PARSING.h"
#include "newParsing.h"
#include "Declarations.h"

using namespace std;

//gloabal struct == global

int newParse(char packet[]){
  int count = 5;
  char security[2];
  char TFC;
  char dataPiece[3];
  security[0] = 'A';
  security[1] = '2';
  for(int i = 0; i < 2; i++){
      if(security[i] != packet[i])
        return NULL;
  }
  TFC = packet[2];
  if(TFC < 1 || TFC > 3)
    return NULL;
  dataPiece[0] = packet[3];
  dataPiece[1] = packet[4];
  dataPiece[2] = '\0';
  int dataPlace = atoi(dataPiece);
  if(dataPlace < 1 || dataPlace > 33)
    return NULL;
  int newCount = 0;
  while(packet[count] != '\r'){
    newCount++;
    count++;
  }
  count = 5;
  char data[newCount + 1];
  data[newCount] = '0';
  for(int i = 0; i < newCount; i++){
    data[i] = packet[count];
    count++;
  }
  returnData(dataPlace, data);
  return NULL;
}

void returnData(int place, char datArray[]){
    bool datBool;
    int intData;
    float dumby;

  if(place <= 14){
    if(datArray[0] == 'T')
      datBool = TRUE;
    else
      datBool = FALSE;
    }
  else if(place >= 15 && place < 18)
    intData = atoi(datArray);
  else
    dumby = atof(datArray);
  switch(place) {
    case 1:
      TFC1.IMU_connected = datBool;
      break;
    case 2:
      TFC1.TFC_L_connected = datBool;
      break;
    case 3:
      TFC1.TFC_R_connected = datBool;
      break;
    case 4:
      global.liftoff = datBool;
      break;
    case 5:
      global.burnout = datBool;
      break;
    case 6:
      global.apogee = datBool;
      break;
    case 7:
      global.falling = datBool;
      break;
    case 8:
      global.emergency = datBool;
      break;
    case 9:
      global.is_done = datBool;
      break;
    case 10:
      global.roll_direction = datBool;
      break;
    case 11:
      global.open_valves = datBool;
      break;
    case 12:
      global.TFC_1_connected = datBool;
      break;
    case 13:
      global.TFC_2_connected = datBool;
      break;
    case 14:
      global.TFC_3_connected = datBool;
      break;
    case 15:
      TFC1.timestamp = intData;
      break;
    case 16:
      global.hold_time = intData;
      break;
    case 17:
      global.current_time = intData;
      break;
    case 18:
      TFC1.current_direction = dumby;
      break;
    case 19:
      TFC1.altitude = dumby;
      break;
    case 20:
      TFC1.pressure = dumby;
      break;
    case 21:
      TFC1.temp = dumby;
      break;
    case 22:
      TFC1.roll = dumby;
      break;
    case 23:
      TFC1.pitch = dumby;
      break;
    case 24:
      TFC1.yaw = dumby;
      break;
    case 25:
      TFC1.acceleration = dumby;
      break;
    case 26:
      TFC1.velocity = dumby;
      break;
    case 27:
      TFC1.error = dumby;
      break;
    case 28:
      TFC1.last_error = dumby;
      break;
    case 29:
      TFC1.integral_error = dumby;
      break;
    case 30:
      TFC1.omega_reading = dumby;
      break;
    case 31:
      TFC1.d_error = dumby;
      break;
    case 32:
      global.setpoint = dumby;
      break;
    case 33:
      global.last_setpoint = dumby;
      break;
  }
}
