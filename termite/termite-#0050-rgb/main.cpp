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
   auto rgb_red   = hwlib::target::pin_out( hwlib::target::pins::led_red );
   auto rgb_green = hwlib::target::pin_out( hwlib::target::pins::led_green );
   auto rgb_blue  = hwlib::target::pin_out( hwlib::target::pins::led_blue );
   auto rgb_p_i   = hwlib::port_out_from( rgb_red, rgb_green, rgb_blue );
   auto rgb_port  = hwlib::invert( rgb_p_i );
   auto rgb_walk  = hwlib::walk_background( rgb_port, 500 );
   hwlib::background::run();
}

