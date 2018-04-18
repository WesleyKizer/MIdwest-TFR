#include "Testing.h"

char c = 'A';

void alphabet() {
    Xbee.print( c );
    //--- display the character just sent on console ---
//Serial.println( c );
    //--- get the next letter in the alphabet, and reset to ---
    //--- 'A' once we have reached 'Z'.
    c = c + 1;
    if ( c>'Z' )
         c = 'A';
}
