#include <stdio.h>

void scanArray(char array[],int size)
    {
        for(int counter=0 ; counter<size ; counter++)
            {
                printf("please enter your array's characters:[%d]= ",counter);
                scanf(" %c",&array[counter]);
            }

    }

    void displayArray(char array[],int size)
    {
        printf("display characters:{");

            for(int counter=0;counter<size; counter++)
                {
                    printf(" %c",array[counter]);
                }
                 printf(" }");
                printf("\n");
    }

    ////////////////////////////////////////////max code
    int getmaximumcharacter(char array[],int size)
    {
        char max=array[0];
        for(int counter=1;counter<size;counter++)
            {
                if(max < array[counter])
                    {
                        max=array[counter];
                    }
            }

        return max;
    }



   