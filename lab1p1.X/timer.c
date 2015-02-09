/*
 *
 *  File:         timer.c
 *  Date:         5Feb2015
 *  Authors:      Alberto Heras, Timothy Luensman, Tommy May, Xinran Fang
 *
 */

#include "p24FJ64GA002.h"
#include "timer.h"
#include "shared.h"


#define FCY 14745600.0
#define waitTime .001 // 1 millisecond

/*********************************************************************************************/

//Uses timer 2
void delayUs(unsigned int delay)
{
    // Put the timer flag down and turn on the timer
    IFS0bits.T2IF = 0;
    T2CONbits.TON = 1;
    
    // Wait until the timer 2 interrupt flag goes up. This is done in hardware.
    while(IFS0bits.T2IF == 0);

    IFS0bits.T2IF = 0; // Put the flag down afterwards.
    T2CONbits.TON = 0; // Turn the timer off so it does not keep counting.
    
}

/*********************************************************************************************/

void initTimer2()
{
    //TODO: Set up the 5millisecond delay with this
    unsigned int prVal = ((FCY*waitTime)/256.0) - 1.0;
    TMR2 = 0; //According to the datasheet this should be reset automatically, but it does not sometimes.
    PR2 = prVal; //Period register value calculated from lecture
    T2CONbits.TCKPS = 0b11; //prescalar 256
    IFS0bits.T2IF = 0; // Timer 2 interrupt flag down
    T2CONbits.TON = 1; // Turn timer 2 on
}

/*********************************************************************************************/
