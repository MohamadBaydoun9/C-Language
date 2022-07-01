/*
Display The Following Pattern:
Enter the number of rows: 6
* * * * * * * * * * *
  * * * * * * * * *
    * * * * * * *
      * * * * *
        * * *
          *
*/
#include <stdio.h>
int main() {
   int n, i, j, s;
   printf("Enter the number of rows: ");
   scanf("%d", &n);
   for (i = 0; i < n; i++) {
      for (s = 0; s < i; s++)
         printf("  ");
         
      for (j = i; j < n; ++j)
         printf("* ");
         
      for (j = i; j < n-1; ++j)
         printf("* ");
         
      printf("\n");
   }
   return 0;
}

