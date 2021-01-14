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
   auto g0    = hwlib::target::pin_out( hwlib::target::pins::b4 );
   auto g1    = hwlib::target::pin_out( hwlib::target::pins::b6 );
   auto g2    = hwlib::target::pin_out( hwlib::target::pins::b5 );
   auto g3    = hwlib::target::pin_out( hwlib::target::pins::a0 );
   auto g4    = hwlib::target::pin_out( hwlib::target::pins::b7 );
   auto g5    = hwlib::target::pin_out( hwlib::target::pins::b0 );
   auto g6    = hwlib::target::pin_out( hwlib::target::pins::b1 );
   auto port  = hwlib::port_out_from( g0, g1, g2, g3, g4, g5, g6 );
   hwlib::kitt( port );
}

