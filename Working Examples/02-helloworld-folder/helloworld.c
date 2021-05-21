#include <stdio.h>
#include "pico/stdlib.h"


int main() {

    //initialise stdio
    stdio_init_all();

    //loop to repeatedly print "Hello world"
    while(1) {

        printf("Hello world!\n");

        sleep_ms(5000);

    }
}
