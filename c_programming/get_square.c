#include <stdio.h>
/**
* getsquare - get square of number passed
* @num: number to be squared
*return: squared num or -1
*/ 

int getSquare(int num)
    {
        if(sizeof(num) == sizeof(int)){
            return (num * num);
        }
        printf("please enter a valid number!\n");
        return(-1);
    }