#include <stdio.h>

void scanArray(int array[],int size)
    {
        for(int counter=0 ; counter<size ; counter++)
            {
                printf("please enter your array's numbers:[%d]= ",counter);
                scanf(" %d",&array[counter]);
            }

    }

    void displayArray(int array[],int size)
    {
        printf("display elements:{");

            for(int counter=0;counter<size; counter++)
                {
                    printf(" %d",array[counter]);
                }
                 printf(" }");
                printf("\n");
    }

    ////////////////////////////////////////////repeat code
  int repeatSpecificNum(int array[],int size, int SpecificNumber)
    {
    
        int THErepeat=0;

        for(int count=0;count<size;count++)
            {
                 if(array[count] == SpecificNumber)
                      {
                         THErepeat++;
                      }
            }
            return THErepeat;
    }


   