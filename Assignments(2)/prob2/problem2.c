#include <stdio.h>
#include "problem2.h"



   S32_t vowel_count=0;
void modifyString(C8_t *str) 
{ 

 while(*str !='\0' )
 {
         if(*str=='a' || *str=='e' || *str=='i' || *str=='o' || *str=='u' ||
            *str=='A' || *str=='E' || *str=='I' || *str=='O' || *str=='U')
            {
            vowel_count++;
            }


          if( *str>='a'  && *str<='z')
             {
               *str=*str-32;
             }   

             str++;
}
}



