#ifndef _XBEE_H_
#define _XBEE_H_

#include "Declarations.h"



void xbee_connected();
bool xbee_signal();


int read_packet(int readch, char *buffer, int len);



#endif
