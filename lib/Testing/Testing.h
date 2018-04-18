#ifndef _TESTING_H_
#define _TESTING_H_

#include "Declarations.h"



//testing functions
void all_high();
void all_low();
void all_colors();
void alphabet();


#endif

/*
Serial
println()
Description

Prints data to the serial port as human-readable ASCII text followed by a carriage return character (ASCII 13, or '\r') and a newline character (ASCII 10, or '\n'). This command takes the same forms as Serial.print().
Syntax

Serial.println(val)
Serial.println(val, format)
Parameters

val: the value to print - any data type

format: specifies the number base (for integral data types) or number of decimal places (for floating point types)
////////////////////////////////////////////////////////////////////
Serial
write()
Description

Writes binary data to the serial port. This data is sent as a byte or series of bytes; to send the characters representing the digits of a number use the print() function instead.
Syntax

Serial.write(val)
Serial.write(str)
Serial.write(buf, len)
////////////////////////////////////////////////////////////
Serial
print()
Description

Prints data to the serial port as human-readable ASCII text. This command can take many forms. Numbers are printed using an ASCII character for each digit. Floats are similarly printed as ASCII digits, defaulting to two decimal places. Bytes are sent as a single character. Characters and strings are sent as is. For example:

    Serial.print(78) gives "78"
    Serial.print(1.23456) gives "1.23"
    Serial.print('N') gives "N"
    Serial.print("Hello world.") gives "Hello world."

An optional second parameter specifies the base (format) to use; permitted values are BIN (binary, or base 2), OCT (octal, or base 8), DEC (decimal, or base 10), HEX (hexadecimal, or base 16). For floating point numbers, this parameter specifies the number of decimal places to use. For example:

    Serial.print(78, BIN) gives "1001110"
    Serial.print(78, OCT) gives "116"
    Serial.print(78, DEC) gives "78"
    Serial.print(78, HEX) gives "4E"
    Serial.println(1.23456, 0) gives "1"
    Serial.println(1.23456, 2) gives "1.23"
    Serial.println(1.23456, 4) gives "1.2346"

You can pass flash-memory based strings to Serial.print() by wrapping them with F(). For example :

    Serial.print(F(“Hello World”))

To send a single byte, use Serial.write().
Syntax

val: the value to print - any data type

format: specifies the number base (for integral data types) or number of decimal places (for floating point types)
Returns

size_t (long): print() returns the number of bytes written, though reading that number is optional
/////////////////////////////////////////////////////////////////
Serial
read()

Reads incoming serial data. read() inherits from the Stream utility class.
Syntax

Serial.read()

the first byte of incoming serial data available (or -1 if no data is available) - int
/////////////////////////////////////////////////////////////////////////////////
Serial
peek()

Returns the next byte (character) of incoming serial data without removing it from the internal serial buffer. That is, successive calls to peek() will return the same character, as will the next call to read(). peek() inherits from the Stream utility class.
Syntax

Serial.peek()

None
Returns

the first byte of incoming serial data available (or -1 if no data is available) - int
////////////////////////////////////////////////////////////
*/
