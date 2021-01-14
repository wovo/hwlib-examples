// ==========================================================================
//
// blink the LED on an Arduino Uno
//
// (c) Wouter van Ooijen (wouter@voti.nl) 2017
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at
// http://www.boost.org/LICENSE_1_0.txt) 
//
// ==========================================================================

#include "hwlib.hpp"

int main( void ){
   DDRB = DDRB | ( 0b01 << 5 );
   volatile int v;
   for(;;){
      PORTB = PORTB & ~( 0b01 << 5 );
      for( uint32_t i = 0; i < 50'000; ++i ){ (void)v; }
      PORTB = PORTB | ( 0b01 << 5 );
      for( uint32_t i = 0; i < 50'000; ++i ){ (void)v; }
   }      
}
