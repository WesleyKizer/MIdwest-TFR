#include "Testing.h"


void alphabet() {
    static char c = 'A';
    
    Xbee.print( c );

    //get the next letter in the alphabet, and reset to 'A' once we have reached 'Z'
    c = c + 1;
    if ( c>'Z' )
         c = 'A';
}
