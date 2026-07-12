#include <stdio.h>
#include "problem5.h"
            
 S32_t power(S32_t base, S32_t exponent)
 {
    S32_t count=0;

       if(exponent == 0)
    {
        return 1;
    }   
        else
            {
                count=power( base , exponent-1 );
                return base*count;
            }   
        

 }
 //بتطلع باقى القسمه 456%10=6
 S32_t sumDigits(S32_t n)
 {
   if(n==0)
    {
        return 0;
    } else 
        {
            return (n%10)+sumDigits(n/10); /// n/10 =123(4)=123 remove last element
                                           /// n%10 =123.4 =4 % take the الباقى     

        }


    
 }




















