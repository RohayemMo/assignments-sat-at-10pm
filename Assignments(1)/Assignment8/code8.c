#include <stdio.h>
#include "code8.h"

void scanArray_int_or_char(C8_t array[], S32_t size, C8_t user_input)
{

 ////if statement

    if(user_input == '1')
    {
        //scan int_array
        register S32_t counter;

        for(counter=0 ; counter<size ; counter++)
            {
                printf("please enter your array's numbers:[%d]= ",counter);
                scanf(" %d",&array[counter]);
            }

        //DISPLAY INT_ARRAY BEFORE RESERVE
            printf("display array before reserve:{");

               for(counter=0;counter<size; counter++)
                    {
                      printf(" %d",array[counter]);
                    }
                        printf(" }");
                        printf("\n");

                        // RESERVE code
                          for(counter=0; counter<size/2; counter++)
                        {
                            S32_t reserve=array[counter];
                            array[counter]=array[size-1-counter];
                            array[size-1-counter]=reserve;
                        }

                        //display after reserve
                         printf("display array after reserve:{");

               for(counter=0;counter<size; counter++)
                    {
                      printf(" %d",array[counter]);
                    }
                        printf(" }");
                        printf("\n");

    }
    else if(user_input == 'a')
    {
        register S32_t counter;

        for(counter=0 ; counter<size ; counter++)
            {
                printf("please enter your array's character:[%d]= ",counter);
                scanf(" %c",&array[counter]);
            }

        //DISPLAY char_ARRAY BEFORE RESERVE
            printf("display array before reserve:{");

               for(counter=0;counter<size; counter++)
                    {
                      printf(" %c",array[counter]);
                    }
                        printf(" }");
                        printf("\n");

                        // RESERVE code
                          for(counter=0; counter<size/2; counter++)
                        {
                            C8_t reserve=array[counter];
                            array[counter]=array[size-1-counter];
                            array[size-1-counter]=reserve;
                        }

                         printf("display array after reserve:{");

               for(counter=0;counter<size; counter++)
                    {
                      printf(" %c",array[counter]);
                    }
                        printf(" }");
                        printf("\n");
    }
    else
    {
        printf("invaild value");
    }

}



















   