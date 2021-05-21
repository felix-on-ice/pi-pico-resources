#include <stdio.h>
#include "pico/stdlib.h"


int main() {

    //initialise stdio
    stdio_init_all();
   
    while(1) {

        //create array to hold input text
        char input_text[20];

        sleep_ms(5000);

        printf("Input your text please:\n");

        scanf("%s", input_text);            //scans the user input

        printf("\nYou wrote: %s\n", input_text);        //prints the input back out

    }
}
