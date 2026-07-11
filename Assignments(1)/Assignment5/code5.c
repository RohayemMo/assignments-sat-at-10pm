#include <stdio.h>
#include "code5.h"

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

//////////////////////////////////////////////////////////repeatr code
S32_t repeatSpecificchar(C8_t array[], S32_t size, C8_t Specificchar)
{
    S32_t THErepeat = 0;

    register S32_t count;

    for(count = 0; count < size; count++)
    {
        if(array[count] == Specificchar)
        {
            THErepeat++;
        }
    }

    return THErepeat;
}