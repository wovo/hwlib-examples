// ==========================================================================
//
// OLED demo on DB103 (LPC1114)
//
// (c) Wouter van Ooijen (wouter@voti.nl) 2019
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at 
// http://www.boost.org/LICENSE_1_0.txt) 
//
// ==========================================================================

#include "hwlib.hpp"
// NOTICE!!
// Any pin can be used as an OC (or open drain) pin. As long as the pin is also connected to the 3.3 V through a 4k7 resistor which pulls the pin up.
int main( void ){
       
   namespace target = hwlib::target;
   
   auto scl           = hwlib::target::pin_oc{ hwlib::target::pins::d11 };
   auto sda           = hwlib::target::pin_oc{ hwlib::target::pins::d14 };
   
   auto i2c_bus       = hwlib::i2c_bus_bit_banged_scl_sda( scl, sda );
   auto oled          = hwlib::glcd_oled( i2c_bus );  
   
   auto font          = hwlib::font_default_8x8();
   auto display       = hwlib::terminal_from( oled, font );
   
   display 
      << "\f" << "Hello world!!" 
      << "\n" << "second line.."
      << "\t0305" << "pos 3 line 5"
      << hwlib::flush;     
}
