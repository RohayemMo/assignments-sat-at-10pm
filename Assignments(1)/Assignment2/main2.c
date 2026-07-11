#include <stdio.h>
#include "code2.h"

int main()
{
    S32_t size; 

    printf("please enter the array'size:");
    scanf(" %d",&size);

    C8_t array[size];

scanArray(array , size );
displayArraybefore( array,size);

sortArrayr_Ascending_order(array , size);
displayArrayafter_Ascending_order( array,size);

sortArrayr_Descending_order(array , size);
displayArrayafter_Descending_order(array , size);

    return 0;
}