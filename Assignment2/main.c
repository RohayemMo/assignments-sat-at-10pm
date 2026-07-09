#include <stdio.h>
#include "code.h"

int main()
{
    int size; 

    printf("please enter the array'size:");
    scanf(" %d",&size);

char array[size];

scanArray(array , size );
displayArraybefore( array,size);

sortArrayr_Ascending_order(array , size);
displayArrayafter_Ascending_order( array,size);

sortArrayr_Descending_order(array , size);
displayArrayafter_Descending_order(array , size);

    return 0;
}