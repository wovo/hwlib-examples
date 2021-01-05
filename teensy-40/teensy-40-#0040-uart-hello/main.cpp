// ==========================================================================
//
// Hello world on DB103 (LPC1114)
//
// (c) Wouter van Ooijen (wouter@voti.nl) 2017
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at 
// http://www.boost.org/LICENSE_1_0.txt) 
//
// ==========================================================================

#include "hwlib.hpp"

// NOTICE! 
// The Teensy 4.0 does not have an UART hardware block wired to the USB for 'couting' like the Arduino Due. 
// Meaning TX1 or "d1" is used as an UART transmit pin. This is hard programmed within HWLIB.
// This cannot be changed unless you really know what you are doing. It is best to stay away from altering this.
// In case you do not have the schematics from the Teensy: point the USB upwards, d1 is the 3th pin, counting from the upper left side.
// This pin needs to be wired to the RX from a 'TTL to USB' chip. The 'TTL to USB' chip also needs to be wired to the ground.

int main( void ){
   
   // wait for the terminal emulator to start up
   hwlib::wait_ms( 1'000 );
       
   hwlib::cout 
      << "Hello world!\n" 
      << hwlib::flush;
}
