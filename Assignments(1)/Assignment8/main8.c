#include <stdio.h>
#include "code8.h"

int main()
{
    S32_t size;
    printf("please enter your array's size:");
    scanf("%d",&size);

    C8_t array[size];

    C8_t char_or_int;
    printf("put number 1 for int_array and a for char_array : ");
    scanf(" %c",&char_or_int);

    scanArray_int_or_char(array, size, char_or_int);

    return 0;
}