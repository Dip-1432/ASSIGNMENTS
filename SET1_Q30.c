// WAP in c to perform addition of two matrices.
#include <stdio.h>
#include <stdlib.h>
int main() {
   int a[3][4], b[3][4], sum[3][4];
   for (int i = 0; i < 3; i++){
      for (int j = 0; j < 4; j++){
         a[i][j] =rand() % 9 +1;
         b[i][j] =rand() % 9 +1;
      }
   }
   for (int i = 0; i < 3; i++){
      for (int j = 0; j < 4; j++){
         sum[i][j] = a[i][j] + b[i][j];
      }
   }
   printf("Matrix A:\n");
   for (int i = 0; i < 3; i++){
      for (int j = 0; j < 4; j++){
         printf("%d ", a[i][j]);
      }
      printf("\n");
   }
   printf("Matrix B:\n");
   for (int i = 0; i < 3; i++){
      for (int j = 0; j < 4; j++){
         printf("%d ", b[i][j]);
      }
      printf("\n");
   }
   printf("Sum of matrices:\n");
   for (int i = 0; i < 3; i++){
      for (int j = 0; j < 4; j++){
         printf("%d ", sum[i][j]);
      }
      printf("\n");
   }
   return 0;
}
