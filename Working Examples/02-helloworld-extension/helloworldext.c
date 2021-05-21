#include <stdio.h>
#include "pico/stdlib.h"


int main() {

    //initialise stdio
    stdio_init_all();

    //define the LED pin as the default Pico LED
    const uint led_blinky = 25;
    
    //initialise the LED pin as a GPIO
    gpio_init(led_blinky);
    //set the LED pin to be an output
    gpio_set_dir(led_blinky, GPIO_OUT);

    //create variable to hold LED flashes
    int led_number = 0;
   
    while(1) {

        printf("LED has blinked %d times\n", led_number);

        //flash the LED
        gpio_put(led_blinky, 1);
        sleep_ms(200);
        gpio_put(led_blinky, 0);

        //add 1 to the LED number
        led_number++;

        sleep_ms(5000);

    }
}
