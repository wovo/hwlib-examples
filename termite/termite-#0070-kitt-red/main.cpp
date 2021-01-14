// ==========================================================================
//
// blink the LED on a blue-pill board
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
   auto r0    = hwlib::target::pin_out( hwlib::target::pins::b3 );
   auto r1    = hwlib::target::pin_out( hwlib::target::pins::a15 );
   auto r2    = hwlib::target::pin_out( hwlib::target::pins::a8 );
   auto r3    = hwlib::target::pin_out( hwlib::target::pins::a2 );
   auto r4    = hwlib::target::pin_out( hwlib::target::pins::a7 );
   auto r5    = hwlib::target::pin_out( hwlib::target::pins::a1 );
   auto port  = hwlib::port_out_from( r0, r1, r2, r3, r4, r5 );
   hwlib::kitt( port );
}

