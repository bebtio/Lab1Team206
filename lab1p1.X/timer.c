/*
 *
 *  File:         timer.c
 *  Date:         5Feb2015
 *  Authors:      Alberto Heras, Timothy Luensman, Tommy May, Xinran Fang
 *
 */

#include "p24FJ64GA002.h"
#include "timer.h"


#define FCY 14745600.0
#define waitTime .005 // 5 milliseconds

/*********************************************************************************************/

//Uses timer 2
void delayUs(unsigned int delay)
{
    
}

/*********************************************************************************************/
// For Deboucing button press and button release
void initTimer1()
{
    //TODO: Set up the 5millisecond delay with this
    unsigned int prVal = ((FCY*waitTime)/256.0) - 1.0;
    PR1 = prVal;
    T1CONbits.TCKPS = 0b11; //prescalar 256
    IEC0bits.T1IE = 1; // Enable the interrupt
    IFS0bits.T1IF = 0; // Put the interrupt flag down
    T1CONbits.TON = 1; // Turn the timer 1 on
}

/*********************************************************************************************/

void initTimer2()
{

}

/*********************************************************************************************/