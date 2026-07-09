#include <stdio.h>
#include "code.h"

int main()
{
    int size; //  i had a mistake here( I forgot to declare 'size'.)  // i still don't understand that?
             // i thought if i declared "size" in header file, i dont need to declare it in main.c

    printf("please enter the array'size:");
    scanf(" %d",&size);

char array[size];

scanArray(array , size );
displayArray( array,size);

    return 0;
}