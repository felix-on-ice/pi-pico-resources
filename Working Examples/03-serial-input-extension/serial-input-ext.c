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

    int led_switch;
   
    while(1) {

        sleep_ms(5000);

        printf("Input your text please:\n");

        scanf("%d", &led_switch);            //scans the user input (note address must be listed, not just variable name)

        if(led_switch == 0) {

            printf("\nYou turned the LED off!\n");
            gpio_put(led_blinky, 0);            //turn LED off

        } else if(led_switch == 1) {
            
            printf("\nYou turned the LED on!\n");
            gpio_put(led_blinky, 1);            //turn LED on

        } else {

            printf("\nError: You didn't do anything...\n");         //error statement for if something other than 1 or 0 is typed

        }

    }
}
