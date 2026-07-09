#include <stdio.h>
#include "code.h"

int main()
{
int size;
printf("please enter your array's size:");
scanf("%d",&size);
int array[size];

scanArray(array,size);
displayBeforeSort(array,size);
MaxNumberBeforeSort( array, size);

sortArray(array,size);
displayBeforeSort(array, size);
MaxNumberAfterSort(array, size);

    return 0;
}