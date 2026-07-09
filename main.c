#include <stdio.h>
#include "code.h"

int main()
{

int size;
printf("please enter your array's size:");
scanf("%d",&size);
int array[size];

scanArray(array,size);
displayArray(array,size);

int number;
printf("Enter the number whose repeat you want to know: ");
scanf("%d", &number);

int THErepeatresult;
THErepeatresult = repeatSpecificNum(array,size,number);
printf("Number %d is repeated %d times\n", number, THErepeatresult);

    return 0;
}