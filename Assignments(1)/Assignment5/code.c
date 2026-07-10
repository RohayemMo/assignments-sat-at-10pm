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

    ////////////////////////////////////////////repeat code
 int repeatSpecificchar(char array[],int size, char Specificchar)
    {
        int THErepeat=0;

        for(int count=0;count<size;count++)
            {
                 if(array[count] == Specificchar)
                      {
                         THErepeat++;
                      }
            }
            return THErepeat;
    }


   