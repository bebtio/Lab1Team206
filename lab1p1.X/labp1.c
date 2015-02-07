// ******************************************************************************************* //
//
// File:         lab1p1.c
// Date:         5Feb2015
// Authors:      Allberto Heras, Timothy Luensman, Tommy May, Xinran Fang
//
// Description: Part 1 for lab 1
// ******************************************************************************************* //

#include "p24FJ64GA002.h"
#include "leds.h"
#include "timer.h"
#include "shared.h"
#include <stdio.h>
#include "states.h"



_CONFIG1( JTAGEN_OFF & GCP_OFF & GWRP_OFF & BKBUG_ON & COE_OFF & ICS_PGx1 &
          FWDTEN_OFF & WINDIS_OFF & FWPSA_PR128 & WDTPS_PS32768 )

_CONFIG2( IESO_OFF & SOSCSEL_SOSC & WUTSEL_LEG & FNOSC_PRIPLL & FCKSM_CSDCMD & OSCIOFNC_OFF &
          IOL1WAY_OFF & I2C1SEL_PRI & POSCMOD_XT )

// ******************************************************************************************* //

int main(void)
{


    nextState = run_led_state;
    while(1)
    {
        //TODO: Using a finite-state machine, define the behavior of the LEDs
        //Debounce the switch
        switch(nextState)
        {
                case run_led_state: runLedState(); break;
                case stop_led_state: stopLedState();break;
                case debounce_press_state: debouncePressState(); break;
                case debounce_release_state: debounceReleaseState(); break;
        }
    }
    
    return 0;
}

/*********************************************************************************************/

void _ISR _CNInterrupt(void){
    //TODO: Implement the interrupt to capture the press of the button

}

/*********************************************************************************************/
