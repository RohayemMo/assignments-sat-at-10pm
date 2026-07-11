#include <stdio.h>
#include "code4.h"

int main()
{
    S32_t size;
    printf("please enter your array's size:");
    scanf("%d", &size);

    S32_t array[size];
    scanArray(array, size);
    displayArray(array, size);

    S32_t number;
    printf("Enter the number whose repeat you want to know: ");
    scanf("%d", &number);

    S32_t THErepeatresult;
    THErepeatresult = repeatSpecificNum(array, size, number);
    printf("Number %d is repeated %d times\n", number, THErepeatresult);

    return 0;
}