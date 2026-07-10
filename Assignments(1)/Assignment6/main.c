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

char maxcharacter;
maxcharacter= getmaximumcharacter(array,size);
printf("Your maximum charactr is: %c ",maxcharacter);
    return 0;
}