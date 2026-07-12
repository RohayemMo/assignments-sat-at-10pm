#include <stdio.h>
#include "problem5.h"

int main()
{
    S32_t base, exponent;
    S32_t number;

    printf("Enter base: ");
    scanf("%d", &base);

    printf("Enter exponent: ");
    scanf("%d", &exponent);

    printf("the result = %d\n", power(base, exponent));

    printf("Enter number: ");
    scanf("%d", &number);

    printf("the sum of Digits = %d", sumDigits(number));

    return 0;
}