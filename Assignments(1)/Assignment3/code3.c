#include <stdio.h>
#include "code3.h"

void scanArray( C8_t array[], S32_t size)
    {
        for( S32_t counter=0 ; counter<size ; counter++)
            {
                printf("please enter your array's numbers:[%d]= ",counter);
                scanf(" %d",&array[counter]);
            }

    }

    void displayBeforeSort( C8_t array[], S32_t size)
    {
        printf("display elements before sort:{");

            for( S32_t counter=0;counter<size; counter++)
                {
                    printf(" %d",array[counter]);
                }
                 printf(" }");
                printf("\n");
    }


    void  MaxNumberBeforeSort( C8_t array[], S32_t size)
{
    C8_t max=array[0];
    for (S32_t counter=1; counter<size ; counter++)
        {
            if(max < array[counter])
                {
                    max=array[counter];
                } 
        }

printf("your max number before sort is: [%d]\n",max);

}
//////////////////////////////////////////////////////////////////////////////////////
 void sortArray( C8_t array[], S32_t size)
    {
        C8_t temp;
        for( S32_t element1=0 ; element1<size ; element1++)
         {
            for( S32_t element2=element1+1 ; element2<size ; element2++)
                {
                    if(array[element1] > array[element2])
                        {
                            temp = array[element1];
                            array[element1] = array[element2];
                            array[element2] = temp;
                        }
                }
         }
    }

    void displayAfterSort( C8_t array[], S32_t size)
    {
        printf("display elements after sort:{");

            for( S32_t counter=0;counter<size; counter++)
                {
                    printf(" %d",array[counter]);
                }
                 printf(" }");
                printf("\n");
    }



void  MaxNumberAfterSort( C8_t array[], S32_t size)
{
    C8_t last_value;
    last_value=array[size-1];
    printf("your max number is your last element:[%d]\n",last_value);
   
}