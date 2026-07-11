#include <stdio.h>
#include "problem1.h"

 int main()
 { 
   float balance=5000.0;
   S32_t type;

 
        printf("Welcome to Matrya ATM\n"); 
   printf("Your account contains a balance =5000\n");
   printf("\n");

   do{
      printf("\n");
      printf("*********************************************************************\n");
      printf("\n");

      printf("***** ATM MENU *****\n");
      printf("1.DEPOSIT\n");
      printf("2.WITHDRAW\n");
      printf("3.CHECK BALANCE\n");
      printf("4.END THE PROCESS\n");
      printf("\n");

      printf("Choose the number of the  process that you want to do: ");
      scanf(" %d",&type);

      if(type==1)
      {
         processTransaction(&balance,1);

         }else if(type==2)
               {
                  processTransaction(&balance,2);

                }else if(type==3)
                     {
                        processTransaction(&balance,3);

                      }else if (type==4)
                        {
                           printf("Thanks for using Matrya ATM\n");
                         }else
                            {
                               printf("invaid processr\n");
                            }
    
      

    } while(type != 4);

    return 0;
   }