#include <stdio.h>
#include "code4.h"

void scanArray(S32_t array[], S32_t size)
{
    register S32_t counter;

    for(counter = 0; counter < size; counter++)
    {
        printf("please enter your array's numbers:[%d]= ", counter);
        scanf("%d", &array[counter]);
    }
}


void displayArray(S32_t array[], S32_t size)
{
    register S32_t counter;

    printf("display elements:{");

    for(counter = 0; counter < size; counter++)
    {
        printf(" %d", array[counter]);
    }

    printf(" }\n");
}
//////////////////////////////////////////////////////////////////////////////////////////////////////////

S32_t repeatSpecificNum(S32_t array[], S32_t size, S32_t SpecificNumber)
{
    S32_t THErepeat = 0;

    register S32_t count;

    for(count = 0; count < size; count++)
    {
        if(array[count] == SpecificNumber)
        {
            THErepeat++;
        }
    }

    return THErepeat;
}