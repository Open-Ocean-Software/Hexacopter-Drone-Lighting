
#include "Controller.h"
#include "Config.h"
#include "Registers.h"
#include "Components.h"
#include "Communications.h"
#include "Presets.h"

#include <avr/io.h>
#include <avr/interrupt.h>
#include <util/delay.h>


void executeComponents (void)
{
    for (unsigned char i = 0; i < COMPONENTLIST_COUNT; i++) {
        struct Component *comp = &Components[i];
        comp->Handler(comp, ReadStopwatch());
    }
}

void executePresets (void)
{
    static unsigned char presetCodeSave = 0x00;
    unsigned char presetCode = Reg_Preset_GetCode();
    if (presetCode == 0x00) {
        return;
    }
    if (!PresetExists(presetCode)) {
        return;
    }

    struct Preset *preset = FindPreset(presetCode);
    if (presetCode != presetCodeSave) {
        preset->StartTime = ReadStopwatch();
    }
    if (ReadStopwatch() - preset->StartTime >= preset->MaxDuration) {
        if (Reg_Preset_GetPersist()) {
            preset->StartTime = ReadStopwatch();
        } else {
            Reg_Preset_SetCode(0x00);
        }
    }

    preset->Callback(ReadStopwatch());
    presetCodeSave = presetCode;
}

void Activity (void)
{
    InitializeComponents();
    while (Reg_Control_GetEnabled()) {
        ReadCommunications();
        executeComponents();
        executePresets();
    }
}

void Standby (void)
{
    while (!Reg_Control_GetEnabled()) {
        _delay_ms(CONFIG_CONTROLLER_STANDBYTIMEOUT);
        ReadCommunications();
    }
}


double elapsedTime;

void InitializeStopwatch (void)
{
    // Resets the timer on overflow.
    TIMSK |= (1 << TOIE0);
    // F = F_CPU / 64
    TCCR0 &= (1 << CS02);
    TCCR0 |= (1 << CS01) | (1 << CS00);
    // Fc = 0.001s
    TCNT0 = (unsigned char)((double)CONFIG_F_CPU / (double)CONFIG_CONTROLLER_SWPRESCALER / (double)CONFIG_CONTROLLER_SWFREQUENCY);
    // Enable global interrupts
    sei();

    elapsedTime = 0.0;
}

void StopwatchHandler (void)
{
    elapsedTime += 1.0 / (double)CONFIG_CONTROLLER_SWFREQUENCY;
}

double ReadStopwatch (void)
{
    return elapsedTime;
}

void ResetStopwatch (void)
{
    elapsedTime = 0.0;
}
