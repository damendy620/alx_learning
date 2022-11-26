#include <stdio.h>
#include "main.h"

/**
* main - entrypoint
*
*return: always 0
*/

int main(void){
    /*we declare a variable to contain the result of this function*/
    int squared;

    squared = getSquare(2);
    printf("the value of squared is: %d\n", squared);
    return (0);
}