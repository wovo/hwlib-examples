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

void flash( hwlib::pin_out & pin ){
    pin.write( 0 );
    for( volatile uint32_t i = 0; i < 350'000; i++ ){}
    pin.write( 1 );
    for( volatile uint32_t i = 0; i < 350'000; i++ ){}
}

int main( void ){
    
   auto led_red = hwlib::target::pin_out( 2, 13 );
   auto led_green = hwlib::target::pin_out( 0, 1 );
   auto led_blue = hwlib::target::pin_out( 0, 2 );
   
   for(;;){
      flash( led_red );
      flash( led_green );
	  flash( led_blue );
	  flash( led_blue );
   } 	  
}

