#include <stdio.h>
#include "code5.h"

int main()
{
    S32_t size;
    printf("please enter your array's size:");
    scanf("%d", &size);

    C8_t array[size];
    scanArray(array, size);
    displayArray(array, size);

    C8_t charac;
    printf("Enter the character whose repeat you want to know: ");
    scanf(" %c", &charac);

    S32_t THErepeatresult;
    THErepeatresult = repeatSpecificchar(array, size, charac);
    printf("character %c is repeated %d times\n", charac, THErepeatresult);

    return 0;
}