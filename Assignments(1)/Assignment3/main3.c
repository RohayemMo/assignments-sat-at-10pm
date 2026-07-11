#include <stdio.h>
#include "code3.h"

int main()
{
 S32_t size;
printf("please enter your array's size:");
scanf("%d",&size);
C8_t array[size];

scanArray( array, size);
displayBeforeSort(  array,  size);
 MaxNumberBeforeSort(  array,  size);

sortArray(  array,  size);
MaxNumberAfterSort(  array,  size);
displayAfterSort(  array,  size);

    return 0;
}