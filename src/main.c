
#include "Controller.h"

int main (void)
{
    while (1) {
        InitializeStopwatch();
        Activity();
        Standby();
        ResetStopwatch();
    }
}

ISR(TIMER0_OVF_vect)
{
    StopwatchHandler();
}
