#include <stdio.h>
#include "problem2.h"


int main()
 {
   C8_t word[100];

    printf("Enter a single word: ");
    scanf(" %s", word);
    
    modifyString(word);

    printf("\nModified String (Uppercase): %s\n", word);
    printf("Number of Vowels: %d\n",vowel_count);

    return 0;
}