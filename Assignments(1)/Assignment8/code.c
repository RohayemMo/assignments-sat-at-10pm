#include <stdio.h>
void scanArray_int_or_char(char array[],int size, char user_input)
{

 ////if statement

    if(user_input == '1')
    {
        //scan int_array
        for(int counter=0 ; counter<size ; counter++)
            {
                printf("please enter your array's numbers:[%d]= ",counter);
                scanf(" %d",&array[counter]);
            }
        //DISPLAY INT_ARRAY BEFORE RESERVE
            printf("display array before reserve:{");

               for(int counter=0;counter<size; counter++)
                    {
                      printf(" %d",array[counter]);
                    }
                        printf(" }");
                        printf("\n");
       
                        // RESERVE code
                          for(int counter=0; counter<size/2; counter++)
                        {
                            int reserve=array[counter];
                            array[counter]=array[size-1-counter];
                            array[size-1-counter]=reserve;
                        }
                        //display after reserve
                         printf("display array after reserve:{");

               for(int counter=0;counter<size; counter++)
                    {
                      printf(" %d",array[counter]);
                    }
                        printf(" }");
                        printf("\n");
            
    }
        else if(user_input == 'a' )
    {

        for(int counter=0 ; counter<size ; counter++)
            {
                printf("please enter your array's character:[%d]= ",counter);
                scanf(" %c",&array[counter]);
            }
        //DISPLAY char_ARRAY BEFORE RESERVE
            printf("display array before reserve:{");

               for(int counter=0;counter<size; counter++)
                    {
                      printf(" %c",array[counter]);
                    }
                        printf(" }");
                        printf("\n");
       
                        // RESERVE code
                          for(int counter=0; counter<size/2; counter++)
                        {
                            int reserve=array[counter];
                            array[counter]=array[size-1-counter];
                            array[size-1-counter]=reserve;
                        }
                         printf("display array before reserve:{");

               for(int counter=0;counter<size; counter++)
                    {
                      printf(" %c",array[counter]);
                    }
                        printf(" }");
                        printf("\n");
    } else 
    {
        printf("invaild value");
    }

}






















   