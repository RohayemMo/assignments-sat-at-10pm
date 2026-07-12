#include <stdio.h>
#include "problem3.h"

S32_t sumMainDiagonal(S32_t matrix[3][3]) 
{
    S32_t sum = 0;
    
    for(S32_t counter1 = 0; counter1 < 3; counter1++)
    {
        for(S32_t counter2 = 0; counter2 < 3; counter2++)
        {
            if(counter1 == counter2)
            {
                sum += matrix[counter1][counter2];
            }
        }
    }  
    
    return sum;
}

void searchElement(S32_t *ptr, S32_t target)
{
   S32_t counter=0;
 
   S32_t search=0;
                                                                      
    for(counter= 0; counter < 9; counter++)
    {
        S32_t your_element=*(ptr+counter);

      if(target==your_element)
         {
            S32_t row=counter / 3;
            S32_t column=counter % 3 ;
            printf("Element %d found at location:[%d][%d]\n", target, row, column);
         }
        
    }  
}
// counter = 0  -> 10 (0,0) row counter/3=0     column counter%3=
// counter = 1  -> 20 (0,1) row counter/3=0     column counter%3=
// counter = 2  -> 30 (0,2) row counter/3=0     column counter%3=

// counter = 3  -> 40 (1,0) row counter/3=1     column counter%3=
// counter = 4  -> 50 (1,1) row counter/3=1     column counter%3=
// counter = 5  -> 60 (1,2) row counter/3=1     column counter%3=

// counter = 6  -> 70 (2,0) row counter/3=2     column counter%3=
// counter = 7  -> 80 (2,1) row counter/3=2     column counter%3=
// counter = 8  -> 90 (2,2) row counter/3=2     column counter%3=


















