#include <stdio.h>
#include "code7.h"

int main()
{
    S32_t size;
    printf("please enter your array's size:");
    scanf("%d", &size);

    C8_t array[size];
    scanArray(array, size);
    displayArray_char(array, size);
    displayArray_int(array, size);

    return 0;
}