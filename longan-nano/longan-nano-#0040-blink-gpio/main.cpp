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


#include <hwlib.hpp>

int main ( void )
{
    
    RCC->APB2ENR |= 1 << 4;
  
    GPIOC->CRH &= ~( 0xF << ( ( 13 - 8 ) * 4 ));
    GPIOC->CRH |= 0x03 << ( ( 13 - 8 ) * 4 );    
    
    auto led = hwlib::target::pin_out( 2, 13 );
    //auto led = hwlib::target::pin_out( hwlib::target::pins::led );
    // hwlib::blink( led );

    while(1)
    {
        GPIOC->BSRR |= ( 0x01 << 13 );
        
        for( volatile uint32_t i = 0; i < 100'000; i++ ){}
        //for(unsigned int rx=0;rx<150000;rx++){ volatile int i; (void) i; };
        
        GPIOC->BSRR |= ( 0x01 << ( 13 + 16 ) );
        
        //for( volatile uint32_t i = 0; i < 100'000; i++ ){}
        for(unsigned int rx=0;rx<150000;rx++){ volatile int i; (void) i; };
    }
    return(0);
}


