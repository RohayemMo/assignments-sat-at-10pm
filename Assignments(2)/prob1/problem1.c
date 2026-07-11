#include <stdio.h>
#include "problem1.h"


void processTransaction(F32_t *balance, S32_t type)
{
    F32_t amount;
    static int  the_total_number_of_valid_transactions = 0;
  
    switch(type)
    {
        case 1:
                printf("Enter your amount to deposit: ");
                scanf(" %f",&amount);

                *balance=*balance+amount;
                the_total_number_of_valid_transactions++;
                printf("deposit successful\n your current balance=%f",*balance);
                 break;
        case 2:
                printf("Enter your amount to withdraw: ");
                scanf(" %f",&amount);

                if(amount <= *balance)
                  {
                     *balance=*balance-amount;
                      the_total_number_of_valid_transactions++;
                      printf("withdraw successful\n your current balance=%f",*balance);
                  } 
                      else
                          {
                             printf("You don't have enough balance in your account to complete the withdrawal.\n");
                          }
                 break;

        case 3:
                printf("The total number of valid transactions:[ %d]",the_total_number_of_valid_transactions);
                break;

        default:
                printf("Invaild transaction! ,please try again\n");
                
    }
}