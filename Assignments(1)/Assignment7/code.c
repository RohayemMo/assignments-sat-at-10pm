#include <stdio.h>

    void scanArray(char array[],int size)
    {
        for(int counter=0 ; counter<size ; counter++)
            {
                printf("please enter your array's characters:[%d]= ",counter);
                scanf(" %c",&array[counter]);
            }

    }

    void displayArray_char(char array[],int size)
    {
        printf("display characters in char:{");

            for(int counter=0;counter<size; counter++)
                {
                    printf(" %c",array[counter]);
                }
                 printf(" }");
                printf("\n");
    }


    ////////////////////////////////////////////coed char to int
    void displayArray_int(char array[],int size)
    {
        printf("display characters in int:{");

            for(int counter=0;counter<size; counter++)
                {
                    printf(" %d",array[counter]);
                }
                 printf(" }");
                printf("\n");
    }
   




   