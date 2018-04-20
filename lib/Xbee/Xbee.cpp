#include "Xbee.h"


/*
takes an incoming character (provided by Serial.read()), and decides what to do with it
     - If new line character (‘\n’), then ignored and thrown away
     - If carriage return, then message complete, return number of characters in message
     - If other, add the character to the buffer (if there’s room)
*/
int read_packet(int readch, char *buffer, int len)
{
  static int pos = 0;
  int rpos;

  if (readch > 0) {
    switch (readch) {
      case '\n': // Ignore new-lines
        break;
      case '\r': // Return on CR
        rpos = pos;
        pos = 0;  // Reset position index ready for next time
        return rpos;
      default:
        if (pos < len-1) {
          buffer[pos++] = readch;
          buffer[pos] = 0;
        }
    }
  }
  // No end of line has been found, so return -1.
  return -1;
}


void alphabet() {
    static char c = 'A';

    Xbee.print( c );

    //get the next letter in the alphabet, and reset to 'A' once we have reached 'Z'
    c = c + 1;
    if ( c>'Z' )
         c = 'A';
}
