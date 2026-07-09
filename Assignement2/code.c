#include <stdio.h>

void scanArray(char array[],int size)
    {
        for(int counter=0 ; counter<size ; counter++)
            {
                printf("please enter your array's character:[ %d]= ",counter);
                scanf(" %c",&array[counter]);
            }

    }


    void displayArraybefore(char array[],int size)
{
     printf(" your array's display before sort is: ");

        for(int counter=0 ; counter<size ; counter++)
            {
                printf( " %c",array[counter]);
            }
            printf("\n");
}
/////////////////////////////////////////////////////////////////////////////////////////////

    void sortArrayr_Ascending_order(char array[],int size)
    {
        int temp;
        for(int element1=0 ; element1<size ; element1++)
         {
            for(int element2=element1+1 ; element2<size ; element2++)
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


void displayArrayafter_Ascending_order(char array[],int size)
{
     printf(" your array's display after sort is: ");

        for(int counter=0 ; counter<size ; counter++)
            {
                printf( " %c",array[counter]);
            }
            printf("\n");
}
////////////////////////////////////////////////////////////////////////////////////////////

void sortArrayr_Descending_order(char array[],int size)
{
        int temp;
        for(int element1=0 ; element1<size ; element1++)
         {
            for(int element2=element1+1 ; element2<size ; element2++)
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


void displayArrayafter_Descending_order(char array[],int size)
{

     printf(" your array's display after sort is: ");

        for(int counter=0 ; counter<size ; counter++)
            {
                printf( " %c",array[counter]);
            }
            printf("\n");
}
