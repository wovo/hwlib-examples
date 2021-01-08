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
   auto led_red   = hwlib::target::pin_out( hwlib::target::pins::led_red );
   auto led_green = hwlib::target::pin_out( hwlib::target::pins::led_green );
   auto led_blue  = hwlib::target::pin_out( hwlib::target::pins::led_blue );
   auto port      = hwlib::port_out_from( led_red, led_green, led_blue );
   hwlib::kitt( port );
}

