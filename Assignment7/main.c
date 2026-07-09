#include <stdio.h>
#include "code.h"

int main()
{

int size;
printf("please enter your array's size:");
scanf("%d",&size);
char array[size];

scanArray(array,size);
displayArray_char(array,size);
displayArray_int(array,size);
return 0;
}