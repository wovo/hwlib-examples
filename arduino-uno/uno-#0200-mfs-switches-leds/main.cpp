#include "hwlib.hpp"

int main( void ){
   
   auto shield = hwlib::multifunction_shield();
     
   for(;;){
      shield.switches.refresh();
      shield.leds.write( shield.switches.read() );
      shield.leds.flush();
   }

}  