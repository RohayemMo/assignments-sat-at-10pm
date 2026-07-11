#include <stdio.h>
#include "code6.h"

int main()
{
    S32_t size;
    printf("please enter your array's size:");
    scanf("%d", &size);

    C8_t array[size];
    scanArray(array, size);
    displayArray(array, size);

    C8_t maxcharacter;
    maxcharacter = getmaximumcharacter(array, size);
    printf("Your maximum character is: %c", maxcharacter);

    return 0;
}