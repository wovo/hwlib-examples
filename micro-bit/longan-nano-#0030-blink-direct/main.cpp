// ==========================================================================
//
// blink the LED on an Arduino Uno
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
    
   RCC->APB2ENR |= 1 << 4;
  
   GPIOC->CRH &= ~( 0xF << ( ( 13 - 8 ) * 4 ));
   GPIOC->CRH |= 0x01 << ( ( 13 - 8 ) * 4 );
   
   for(;;){
      GPIOC->BSRR |= ( 0x01 << 13 );

      // wait some time
      for( volatile uint32_t i = 0; i < 150'000; i++ ){}
	  
      GPIOC->BSRR |= ( 0x01 << ( 13 + 16 ));
	  
      // wait some time
      for( volatile uint32_t i = 0; i < 150'000; i++ ){}
	  
   } 	  
}


