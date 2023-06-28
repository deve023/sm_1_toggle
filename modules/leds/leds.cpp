//=====[Libraries]=============================================================

#include "mbed.h"
#include "arm_book_lib.h"

#include "leds.h"

//=====[Declaration of private defines]========================================

//=====[Declaration of private data types]=====================================

//=====[Declaration and initialization of public global objects]===============

DigitalOut led1(LED1);
DigitalOut led2(LED2);

//=====[Declaration of external public global variables]=======================

//=====[Declaration and initialization of public global variables]=============

//=====[Declaration and initialization of private global variables]============

//=====[Declarations (prototypes) of private functions]========================

//=====[Implementations of public functions]===================================

void opLedInit()
{   
    led1 = ON;
    led2 = OFF;
}

void opLed1Update()
{
    led1 = !led1;
}

void opLed2Update()
{
    led2 = !led2;
}

int OpLedRead()
{
    return led1.read();
}

void opLedWrite( int value )
{
    led1.write( value );
}
//=====[Implementations of private functions]==================================