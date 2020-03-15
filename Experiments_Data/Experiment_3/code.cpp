/* Generated by beamforming_code_gen.py. Parameters:
* phi = 0 deg
* c = 340 m/s
* d = 0.15 m
* f = 750 Hz
* far_field_d = 1.7867647058823526 m */

#include "A328_PINS.h"
#include "FM62429.h"

void setup() {
        _PIN_CONFIG_OUT( _D2 );
        _PIN_CONFIG_OUT( _D3 );
        _PIN_CONFIG_OUT( _D4 );
        _PIN_CONFIG_OUT( _D5 );
        _PIN_CONFIG_OUT( _D6 );
        _PIN_CONFIG_OUT( _D7 );
        _PIN_CONFIG_OUT( _D8 );
        _PIN_CONFIG_OUT( _D9 );
        _PIN_CONFIG_OUT( _D10 );
        _PIN_CONFIG_OUT( _D11 );
        _PIN_CONFIG_OUT( _D12 );
        _PIN_CONFIG_OUT( _D13 );
        // Extra setup code
        initFM62429(25, 24, 23, 22, 21, 20, 20, 21, 22, 23, 24, 25);
}

void loop() {
        _PIN_WRITE( _D2 , 1 );
        _PIN_WRITE( _D3 , 1 );
        _PIN_WRITE( _D4 , 1 );
        _PIN_WRITE( _D5 , 1 );
        _PIN_WRITE( _D6 , 1 );
        _PIN_WRITE( _D7 , 1 );
        _PIN_WRITE( _D8 , 1 );
        _PIN_WRITE( _D9 , 1 );
        _PIN_WRITE( _D10 , 1 );
        _PIN_WRITE( _D11 , 1 );
        _PIN_WRITE( _D12 , 1 );
        _PIN_WRITE( _D13 , 1 );
        delayMicroseconds( 667 );
        _PIN_WRITE( _D2 , 0 );
        _PIN_WRITE( _D3 , 0 );
        _PIN_WRITE( _D4 , 0 );
        _PIN_WRITE( _D5 , 0 );
        _PIN_WRITE( _D6 , 0 );
        _PIN_WRITE( _D7 , 0 );
        _PIN_WRITE( _D8 , 0 );
        _PIN_WRITE( _D9 , 0 );
        _PIN_WRITE( _D10 , 0 );
        _PIN_WRITE( _D11 , 0 );
        _PIN_WRITE( _D12 , 0 );
        _PIN_WRITE( _D13 , 0 );
        delayMicroseconds( 667 );
}
