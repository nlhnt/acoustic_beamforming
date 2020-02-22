/* Generated by beamforming_code_gen.py. Parameters:
* phi = 30 deg
* c = 340 m/s
* d = 0.15 m
* f = 1000 Hz
* far_field_d = 19.05882352941176 m */

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
        initFM62429(20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20);
}

void loop() {
        _PIN_WRITE( _D2 , 1 );
        delayMicroseconds( 44 );
        _PIN_WRITE( _D9 , 0 );
        delayMicroseconds( 59 );
        _PIN_WRITE( _D7 , 1 );
        delayMicroseconds( 59 );
        _PIN_WRITE( _D5 , 0 );
        delayMicroseconds( 44 );
        _PIN_WRITE( _D12 , 1 );
        delayMicroseconds( 15 );
        _PIN_WRITE( _D3 , 1 );
        delayMicroseconds( 44 );
        _PIN_WRITE( _D10 , 0 );
        delayMicroseconds( 59 );
        _PIN_WRITE( _D8 , 1 );
        delayMicroseconds( 59 );
        _PIN_WRITE( _D6 , 0 );
        delayMicroseconds( 44 );
        _PIN_WRITE( _D13 , 1 );
        delayMicroseconds( 15 );
        _PIN_WRITE( _D4 , 1 );
        delayMicroseconds( 44 );
        _PIN_WRITE( _D11 , 0 );
        delayMicroseconds( 15 );
        _PIN_WRITE( _D2 , 0 );
        delayMicroseconds( 44 );
        _PIN_WRITE( _D9 , 1 );
        delayMicroseconds( 59 );
        _PIN_WRITE( _D7 , 0 );
        delayMicroseconds( 59 );
        _PIN_WRITE( _D5 , 1 );
        delayMicroseconds( 44 );
        _PIN_WRITE( _D12 , 0 );
        delayMicroseconds( 15 );
        _PIN_WRITE( _D3 , 0 );
        delayMicroseconds( 44 );
        _PIN_WRITE( _D10 , 1 );
        delayMicroseconds( 59 );
        _PIN_WRITE( _D8 , 0 );
        delayMicroseconds( 59 );
        _PIN_WRITE( _D6 , 1 );
        delayMicroseconds( 44 );
        _PIN_WRITE( _D13 , 0 );
        delayMicroseconds( 15 );
        _PIN_WRITE( _D4 , 0 );
        delayMicroseconds( 44 );
        _PIN_WRITE( _D11 , 1 );
        delayMicroseconds( 15 );
}
