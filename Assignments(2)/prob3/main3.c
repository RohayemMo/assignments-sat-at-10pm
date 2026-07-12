#include <stdio.h>
#include "problem3.h"


int main()
 {
  S32_t matrix[3][3];
  S32_t target;

  printf("please enter your array's elements:\n ");
for(S32_t counter1=0;counter1<3;counter1++)
   {
      for(S32_t counter2=0;counter2<3;counter2++)
          {
            printf("element[%d][%d]: ",counter1,counter2);
            scanf("%d",&matrix[counter1][counter2]);
         }
   }  

   printf("\ndisplay your matrix:\n");
   for(S32_t counter1=0;counter1<3;counter1++)
   {
      for(S32_t counter2=0;counter2<3;counter2++)
          {
            printf("%d  ",matrix[counter1][counter2]);
         }
         printf("\n");
   }  

      S32_t result= sumMainDiagonal(matrix);
      printf("\nSum of main diagonal: %d\n", result);

      printf("\nPlease enter the element you want to search for: ");
      scanf("%d", &target);
      searchElement(&matrix[0][0],target);

    return 0;
}