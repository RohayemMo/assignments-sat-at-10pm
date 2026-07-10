#include <stdio.h>

void scanArray(char array[],int size)
    {
        for(int counter=0 ; counter<size ; counter++)
            {
                printf("please enter your array's character:[ %d]= ",counter);
                scanf(" %c",&array[counter]);
            }
    }

void displayArray(char array[],int size)
{
     printf(" your array's display is: ");

        for(int counter=0 ; counter<size ; counter++)
            {
                printf( " %c",array[counter]);
            }
            printf("\n");
}