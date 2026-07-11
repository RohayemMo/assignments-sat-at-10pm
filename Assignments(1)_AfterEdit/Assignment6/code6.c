#include <stdio.h>
#include "code6.h"

void scanArray(C8_t array[], S32_t size)
{
    register S32_t counter;

    for(counter = 0; counter < size; counter++)
    {
        printf("please enter your array's characters:[%d]= ", counter);
        scanf(" %c", &array[counter]);
    }
}

void displayArray(C8_t array[], S32_t size)
{
    register S32_t counter;

    printf("display characters:{");

    for(counter = 0; counter < size; counter++)
    {
        printf(" %c", array[counter]);
    }

    printf(" }\n");
}

/////////////////////////////////max value
C8_t getmaximumcharacter(C8_t array[], S32_t size)
{
    C8_t max = array[0];

    register S32_t counter;

    for(counter = 1; counter < size; counter++)
    {
        if(max < array[counter])
        {
            max = array[counter];
        }
    }

    return max;
}


   