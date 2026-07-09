#include <stdio.h>

void scanArray(int array[],int size)
    {
        for(int counter=0 ; counter<size ; counter++)
            {
                printf("please enter your array's numbers:[%d]= ",counter);
                scanf(" %d",&array[counter]);
            }

    }

    void displayBeforeSort(int array[],int size)
    {
        printf("display elements before sort:{");

            for(int counter=0;counter<size; counter++)
                {
                    printf(" %d",array[counter]);
                }
                 printf(" }");
                printf("\n");
    }


    void  MaxNumberBeforeSort(int array[],int size)
{
    int max=array[0];
    for (int counter=1; counter<size ; counter++)
        {
            if(max < array[counter])
                {
                    max=array[counter];
                } 
        }

printf("your max number before sort is: [%d]\n",max);

}
//////////////////////////////////////////////////////////////////////////////////////
 void sortArray(int array[],int size)
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

    void displayAfterSort(int array[],int size)
    {
        printf("display elements after sort:{");

            for(int counter=0;counter<size; counter++)
                {
                    printf(" %d",array[counter]);
                }
                 printf(" }");
                printf("\n");
    }



void  MaxNumberAfterSort(int array[],int size)
{
    int last_value;
    last_value=array[size-1];
    printf("your max number is your last element:[%d]\n",last_value);
   
}