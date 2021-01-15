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
    
   auto led = hwlib::target::pin_out( 0, 2 );
   
   for(;;){
      led.write( 1 );

      // wait some time
      for( volatile uint32_t i = 0; i < 150'000; i++ ){}
	  
      led.write( 0 );
	  
      // wait some time
      for( volatile uint32_t i = 0; i < 150'000; i++ ){}
	  
   } 	  
}

