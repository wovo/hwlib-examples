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
   auto b0    = hwlib::target::pin_out( hwlib::target::pins::b13 );
   auto b1    = hwlib::target::pin_out( hwlib::target::pins::b14 );
   auto b2    = hwlib::target::pin_out( hwlib::target::pins::a5 );
   auto b3    = hwlib::target::pin_out( hwlib::target::pins::a4 );
   auto port  = hwlib::port_out_from( b0, b1, b2, b3 );
   hwlib::kitt( port );
}

