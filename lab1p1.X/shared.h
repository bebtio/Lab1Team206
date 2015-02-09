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
#define BUTTON PORTBbits.RB4

// Define ON and OFF
#define ON   0
#define OFF  1

// Define flag interrupt settings
#define DOWN 0
#define UP   1

// Define btton presses
#define PRESSED 0
#define RELEASED 1

/*********************************************************************************************/

// State variables
typedef enum stateTypeEnum{

    // Define states by name
    debounce_press_state,
    debounce_release_state,
    wait_for_press_state,
    wait_for_release_state,
    toggle_leds

} stateType;

/*********************************************************************************************/

extern volatile stateType nextState;
extern volatile stateType currentState;


#endif	/* SHARED_H */



