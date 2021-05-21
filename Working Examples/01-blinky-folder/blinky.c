#include "pico/stdlib.h"

int main() {

    //define the LED pin as the GPIO pin number attached to the LED (this is in the documentation for the Pico)
    const uint led_blinky = 25;
    
    //initialise the LED pin as a GPIO
    gpio_init(led_blinky);
    //set the LED pin to be an output
    gpio_set_dir(led_blinky, GPIO_OUT);

    //this loop switches the LED on and off for ever
    while(1) {

        gpio_put(led_blinky, 1);
        sleep_ms(500);
        gpio_put(led_blinky, 0);
        sleep_ms(500);

    }


}
