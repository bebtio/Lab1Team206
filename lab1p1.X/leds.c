/*
 *
 *  File:         led.c
 *  Date:         5Feb2015
 *  Authors:      Allberto Heras, Timothy Luensman, Tommy May, Xinran Fang
 *
 */

#include "p24FJ64GA002.h"
#include "leds.h"
#include "shared.h"

/*********************************************************************************************/

void initLEDs(){

    //TODO: Initialize the appropriate pins to work with the LEDs
    //TRISBbits.TRISB0 = ON;
    //TRISBbits.TRISB1 = ON;
    // This doesn the same thing as the above
    // Sets the tristate bits for runLED and stopLED to 0, ON
    TRISB = TRISB & 0b00;
    runLED = ON;
    stopLED = OFF;
    
}

/*********************************************************************************************/

void initSW2(){
    //TODO: Initialize the appropriate pins to work with the external switch using a
    //change notification interrupt.
    TRISBbits.TRISB4 = ON;
    IFS1bits.CNIF = 0;
    IEC1bits.CNIE = 1;
    CNEN1bits.CN1IE = 1;
}

/*********************************************************************************************/


