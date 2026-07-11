#include <stdio.h>
#include "code7.h"

void scanArray(C8_t array[], S32_t size)
{
    register S32_t counter;

    for(counter = 0; counter < size; counter++)
    {
        printf("please enter your array's characters:[%d]= ", counter);
        scanf(" %c", &array[counter]);
    }
}


void displayArray_char(C8_t array[], S32_t size)
{
    register S32_t counter;

    printf("display characters in char:{");

    for(counter = 0; counter < size; counter++)
    {
        printf(" %c", array[counter]);
    }

    printf(" }\n");
}
  

void displayArray_int(C8_t array[], S32_t size)
{
    register S32_t counter;

    printf("display characters in int:{");

    for(counter = 0; counter < size; counter++)
    {
        printf(" %d", array[counter]);
    }

    printf(" }\n");
}