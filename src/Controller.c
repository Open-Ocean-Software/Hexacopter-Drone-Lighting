
#include "Controller.h"
#include "Config.h"

#include <avr/io.h>
#include <avr/interrupt.h>

void Activity (void)
{

}

void Standby (void)
{

}


void InitializeStopwatch (void)
{
    // Resets the timer on overflow.
    TIMSK |= (1 << TOIE0);
    // F = F_CPU / 64
    TCCR0 &= (1 << CS02);
    TCCR0 |= (1 << CS01) | (1 << CS00);
    // Fc = 0.001s
    TCNT0 = (unsigned char)((double)CONFIG_F_CPU / 64.0 / 1000.0)
    // Enable global interrupts
    sei();
}

void StopwatchHandler (void)
{

}

void ReadStopwatch (void)
{

}

void ResetStopwatch (void)
{

}
