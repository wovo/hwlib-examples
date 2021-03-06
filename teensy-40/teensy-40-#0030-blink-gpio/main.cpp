// ==========================================================================
//
// blink the LED on an Arduino Due
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
   auto led = hwlib::target::pin_out( hwlib::target::pins::d13 ); // give the correct digital pin, digital pin 13 (also) is the onboard led
   hwlib::blink( led );
}

