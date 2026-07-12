#include <stdio.h>
#include "problem4.h"


int main()
 {
  S32_t array[5];
  S32_t counter;
  S32_t counter1;

  printf("enter 5 elements: ");
   for(counter=0;counter<5;counter++)
      {
         printf("value of element number[ %d]= ",counter);
         scanf(" %d",&array[counter]);
      }
    
   printf("display of u elemnts before sorting: ");
    for(counter=0;counter<5;counter++)
      {
         printf("  %d",array[counter]);
         
      }

            for(counter=0;counter<5;counter++)
               {
                 for( counter1=counter+1 ; counter1<5 ; counter1++)
                  {
                     if(array[counter]>array[counter1])
                        {
                           swap(&array[counter],&array[counter1]);
                        } 
                  } 
               }

      printf("\ndisplay of u elemnts after sorting: ");
       for(counter=0;counter<5;counter++)
         {
           printf("  %d",array[counter]);
         }

    return 0;

}