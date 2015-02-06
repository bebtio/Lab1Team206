/*
 *
 *  File:         shared.h
 *  Date:         5Feb2015
 *  Authors:      Allberto Heras, Timothy Luensman, Tommy May, Xinran Fang
 *
 */

#ifndef SHARED_H
#define	SHARED_H
/*********************************************************************************************/
// DEFINE's

// Define the leds with names
#define runLED LATBbits.LATB0
#define stopLED LATBbits.LATB1

// Define ON and OFF
#define ON   0;
#define OFF  1;

// Define flag interrupt settings
#define DOWN 0;
#define UP   1;

/*********************************************************************************************/

// State variables
typedef enum stateTypeEnum{

    // Define states by name
    runLEDState


} stateType;

/*********************************************************************************************/

#endif	/* SHARED_H */



