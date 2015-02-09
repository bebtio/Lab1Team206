#include "states.h"
#include "timer.h"
#include "shared.h"
#include "p24FJ64GA002.h"
/*********************************************************************************************/
// These two functions only wait for the change notification interrupt to do something
void waitForPressState(){};
void waitForReleaseState(){};

/*********************************************************************************************/
// When the button is pressed, there is a 5ms delay, and then moves the toggle LED
// state
void debouncePressState()
{
    delayUs(5);
    nextState = toggle_leds;
}

/*********************************************************************************************/
// When the button is released, there is a 5ms delay, and then goes to the wait
// for press state
void debounceReleaseState()
{
    delayUs(5);
    nextState = wait_for_press_state;
}

/*********************************************************************************************/
// Toggles the leds on and off
void toggleLEDState()
{
    stopLED = !stopLED;
    runLED = !runLED;

    if(BUTTON == PRESSED)
    {
        nextState = wait_for_release_state;
    }
    else
    {
        nextState = wait_for_press_state;
    }

}

/*********************************************************************************************/
