#include <stdio.h>
#include "code1.h"

void scanArray( C_8t array[],S_32t size)
    {
        register S_32t counter;
        for( counter=0 ; counter<size ; counter++)
            {
                printf("please enter your array's  character:[ %d]= ",counter);
                scanf(" %c",&array[counter]);
            }
    }

void displayArray( C_8t array[],S_32t size)
{
     printf(" your array's display is: ");
       register S_32t counter;

        for(counter=0 ; counter<size ; counter++)
            {
                printf( " %c",array[counter]);
            }
            printf("\n");
}