#include <stdio.h>
#include "code2.h"

void scanArray(C8_t array[], S32_t size)
    {
        S32_t counter;
        for( counter=0 ; counter<size ; counter++)
            {
                printf("please enter your array's character:[ %d]= ",counter);
                scanf(" %c",&array[counter]);
            }

    }


    void displayArraybefore(C8_t array[], S32_t size)
{
     printf(" your array's display before sort is: ");
     S32_t counter;

        for( counter=0 ; counter<size ; counter++)
            {
                printf( " %c",array[counter]);
            }
            printf("\n");
}
/////////////////////////////////////////////////////////////////////////////////////////////

    void sortArrayr_Ascending_order(C8_t array[], S32_t size)
    {
        S32_t temp;
        S32_t element1;
        S32_t element2;
        for( element1=0 ; element1<size ; element1++)
         {
            for(element2=element1+1 ; element2<size ; element2++)
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


void displayArrayafter_Ascending_order(C8_t array[], S32_t size)
{
     printf(" your array's display after sort is: ");
     S32_t counter;

        for( counter=0 ; counter<size ; counter++)
            {
                printf( " %c",array[counter]);
            }
            printf("\n");
}
////////////////////////////////////////////////////////////////////////////////////////////

void sortArrayr_Descending_order(C8_t array[], S32_t size)
{
        S32_t temp;
        S32_t element1;
        S32_t element2;
        for( element1=0 ; element1<size ; element1++)
         {
            for(element2=element1+1 ; element2<size ; element2++)
                {
                    if(array[element1] < array[element2])
                        {
                            temp = array[element2];
                            array[element2] = array[element1];
                            array[element1] = temp;
                        }
                }
         }
}


void displayArrayafter_Descending_order(C8_t array[], S32_t size)
{

     printf(" your array's display after sort is: ");
     S32_t counter;

        for( counter=0 ; counter<size ; counter++)
            {
                printf( " %c",array[counter]);
            }
            printf("\n");
}