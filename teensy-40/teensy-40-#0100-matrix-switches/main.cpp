#include "hwlib.hpp"

void test_dump1( hwlib::matrix_of_switches & kbd ){
   for(;;){
      for( int_fast8_t x = 0; x < kbd.size.x; ++x ){
         for( int_fast8_t y = 0; y < kbd.size.y; ++y ){
             if( kbd.switch_is_closed_at( hwlib::xy( x, y ) ) ){
                hwlib::cout 
                   << x << "," << y 
                   << "\n" << hwlib::flush;
             }
             while( kbd.switch_is_closed_at( hwlib::xy( x, y ))) {}
         }             
      }          
   }
}

void test_dump2( hwlib::matrix_of_switches & kbd ){
   for(;;){
      for( auto coordinates : hwlib::all( kbd.size ) ){
         if( kbd.switch_is_closed_at( coordinates ) ){
            hwlib::cout 
               << "closed @ " << coordinates 
               << "\n" << hwlib::flush;
         }
         while( kbd.switch_is_closed_at( coordinates ) ){}
      }          
   }
}

int main( void ){	
   
   namespace target = hwlib::target;   
   
   // wait for the terminal emulator to start up
   hwlib::wait_ms( 1'000 );
   
   hwlib::cout << "matrix of switches demo " << "\n";   

   auto out0 = target::pin_oc( target::pins::d2 );
   auto out1 = target::pin_oc( target::pins::d3 );
   auto out2 = target::pin_oc( target::pins::d4 );
   auto out3 = target::pin_oc( target::pins::d5 );

   auto in0  = target::pin_in( target::pins::d6 );
   auto in1  = target::pin_in( target::pins::d7 );
   auto in2  = target::pin_in( target::pins::d8 );
   auto in3  = target::pin_in( target::pins::d9 );
   
   in0.pullup_enable();
   in1.pullup_enable();
   in2.pullup_enable();
   in3.pullup_enable();
   
   auto out_port = hwlib::port_oc_from( out0, out1, out2, out3 );
   auto in_port  = hwlib::port_in_from( in0,  in1,  in2,  in3  );
   auto matrix   = hwlib::matrix_of_switches( out_port, in_port );
   
   test_dump2( matrix );
}