#include <stdio.h>
#include "code1.h"

int main()
{
    S_32t size; 

    printf("please enter the array'size:");
    scanf(" %d",&size);

C_8t array[size];

scanArray(array , size );
displayArray( array,size);

    return 0;
}