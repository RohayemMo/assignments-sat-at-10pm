#ifndef CODE_H
#define CODE_H

typedef signed int  S32_t;
typedef char C8_t;

void scanArray( C8_t array[], S32_t size);
void displayBeforeSort( C8_t array[], S32_t size);
void  MaxNumberBeforeSort( C8_t array[], S32_t size);

void sortArray( C8_t array[], S32_t size);
void MaxNumberAfterSort( C8_t array[], S32_t size);
void displayAfterSort( C8_t array[], S32_t size);

#endif 