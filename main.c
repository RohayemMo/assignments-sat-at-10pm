#include <stdio.h>
#include "code.h"

int main()
{

int size;
printf("please enter your array's size:");
scanf("%d",&size);
char array[size];

scanArray(array,size);
displayArray(array,size);

char charac;
printf("Enter the character whose repeat you want to know: ");
scanf(" %c", &charac);

int THErepeatresult;
THErepeatresult = repeatSpecificchar(array,size, charac);
printf("character %c is repeated %d times\n", charac, THErepeatresult);

    return 0;
}