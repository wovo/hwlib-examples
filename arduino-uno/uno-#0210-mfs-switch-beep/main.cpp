#include "hwlib.hpp"

int main( void ){
   
   auto shield = hwlib::multifunction_shield();
     
   for(;;){
      shield.switch_1.refresh();
      shield.beeper.write( shield.switch_1.read() );
      shield.beeper.flush();
   }

}  