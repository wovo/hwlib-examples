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
   auto rgb_walk  = hwlib::walk_background( rgb_port, 1000 );
    
   auto b0     = hwlib::target::pin_out( hwlib::target::pins::b13 );
   auto b1     = hwlib::target::pin_out( hwlib::target::pins::b14 );
   auto b2     = hwlib::target::pin_out( hwlib::target::pins::a5 );
   auto b3     = hwlib::target::pin_out( hwlib::target::pins::a4 );
   auto b_port = hwlib::port_out_from( b0, b1, b2, b3 );
   auto b_kitt = hwlib::kitt_background( b_port, 200 );
   
   auto y0     = hwlib::target::pin_out( hwlib::target::pins::b12 );
   auto y1     = hwlib::target::pin_out( hwlib::target::pins::b15 );
   auto y2     = hwlib::target::pin_out( hwlib::target::pins::a6 );
   auto y3     = hwlib::target::pin_out( hwlib::target::pins::a3 );
   auto y_port = hwlib::port_out_from( y0, y1, y2, y3 );
   auto y_kitt = hwlib::kitt_background( y_port, 250 );
   
   auto r0     = hwlib::target::pin_out( hwlib::target::pins::b3 );
   auto r1     = hwlib::target::pin_out( hwlib::target::pins::a15 );
   auto r2     = hwlib::target::pin_out( hwlib::target::pins::a8 );
   auto r3     = hwlib::target::pin_out( hwlib::target::pins::a2 );
   auto r4     = hwlib::target::pin_out( hwlib::target::pins::a7 );
   auto r5     = hwlib::target::pin_out( hwlib::target::pins::a1 );
   auto r_port = hwlib::port_out_from( r0, r1, r2, r3, r4, r5 );   
   auto r_kitt = hwlib::kitt_background( r_port, 300 );
   
   auto g0     = hwlib::target::pin_out( hwlib::target::pins::b4 );
   auto g1     = hwlib::target::pin_out( hwlib::target::pins::b6 );
   auto g2     = hwlib::target::pin_out( hwlib::target::pins::b5 );
   auto g3     = hwlib::target::pin_out( hwlib::target::pins::a0 );
   auto g4     = hwlib::target::pin_out( hwlib::target::pins::b7 );
   auto g5     = hwlib::target::pin_out( hwlib::target::pins::b0 );
   auto g6     = hwlib::target::pin_out( hwlib::target::pins::b1 );
   auto g_port  = hwlib::port_out_from( g0, g1, g2, g3, g4, g5, g6 );   
   auto g_kitt = hwlib::kitt_background( g_port, 350 );
  
   hwlib::background::run();
}

