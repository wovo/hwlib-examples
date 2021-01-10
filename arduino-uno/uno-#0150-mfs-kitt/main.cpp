#include "hwlib.hpp"

int main( void ){
   auto d1 = hwlib::target::pin_out( hwlib::target::pins::d13 );
   auto d2 = hwlib::target::pin_out( hwlib::target::pins::d12 );
   auto d3 = hwlib::target::pin_out( hwlib::target::pins::d11 );
   auto d4 = hwlib::target::pin_out( hwlib::target::pins::d10 );
   
   auto leds = hwlib::port_out_from( d1, d2, d3, d4 );
     
   hwlib::kitt( leds, 50 );

}  