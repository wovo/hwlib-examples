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
   auto y0    = hwlib::target::pin_out( hwlib::target::pins::b12 );
   auto y1    = hwlib::target::pin_out( hwlib::target::pins::b15 );
   auto y2    = hwlib::target::pin_out( hwlib::target::pins::a6 );
   auto y3    = hwlib::target::pin_out( hwlib::target::pins::a3 );
   auto port  = hwlib::port_out_from( y0, y1, y2, y3 );
   hwlib::kitt( port );
}

