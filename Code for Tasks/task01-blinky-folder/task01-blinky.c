#include "pico/stdlib.h"

int main() {

    //define the LED pin as the GPIO pin number attached to the LED (this is in the documentation for the Pico)
    const uint led_blinky = 25;
    
    //initialise the LED pin as a GPIO
    gpio_init(led_blinky);
    //set the LED pin to be an output
    gpio_set_dir(led_blinky, GPIO_OUT);


    //YOUR CODE GOES HERE
    //You need to switch the LED on and off with a period of 500ms 


}
