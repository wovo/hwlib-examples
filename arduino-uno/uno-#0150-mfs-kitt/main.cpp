#include "hwlib.hpp"

int main( void ){
   
   auto shield = hwlib::multifunction_shield();
     
   hwlib::kitt( shield.leds, 50 );

}  