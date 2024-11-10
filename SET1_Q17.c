// WAP in c to calculate the sum of the series
// 1 + 1/2 + 1/3 + 1/4 + 1/5 + 1/6 + 1/7 + 1/8 + 1/9 + ...... 1/n
#include <stdio.h>
int main() {
   int n;
   float sum = 0.0;
   printf("Enter the value of n: ");
   scanf("%d", &n);
   for (int i = 1; i <= n; i++) {
      sum += 1.0 / i;
   }
   printf("Sum of the series: %.2f", sum);
   return 0;
}