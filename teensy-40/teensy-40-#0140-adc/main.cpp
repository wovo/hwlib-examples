#include "hwlib.hpp"
// NOTICE!!
// Pins a0 to a9 should be used for analog. Others won't work. See the Teensy 4.0 schematics for reference of which pins these are.
int main(void)
{
	auto adc_pin = hwlib::target::pin_adc(hwlib::target::pins::a0);
	hwlib::cout << "start of ADC read on pin number 14/a0\n";
	while (1)
	{	
		hwlib::wait_ms(1000);
		hwlib::cout << adc_pin.read() << "-"; // this returns a value between 0 and 4095. 4095 is equal to the Teensy input voltage, 0 is zero. This is a ratio number.
		
	}
}