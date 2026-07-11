#ifndef CODE_H
#define CODE_H

typedef signed int S32_t;
typedef char C8_t;

void scanArray(C8_t array[], S32_t size);
void displayArraybefore(C8_t array[], S32_t size);

void sortArrayr_Ascending_order(C8_t array[], S32_t size);
void displayArrayafter_Ascending_order(C8_t array[], S32_t size);

void sortArrayr_Descending_order(C8_t array[], S32_t size);
void displayArrayafter_Descending_order(C8_t array[], S32_t size);

#endif