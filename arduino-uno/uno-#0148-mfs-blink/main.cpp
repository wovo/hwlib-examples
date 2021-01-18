#include "hwlib.hpp"

int main( void ){
   
   auto shield = hwlib::multifunction_shield();
     
   hwlib::blink( shield.led_1, 250 );

}  