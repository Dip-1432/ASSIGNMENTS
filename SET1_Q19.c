// WAP in c to calculate the sum of the series
// 1+ (1+2) + (1+2+3) + (1+2+3+4) + (1+2+3+4+5) + ......upto n terms.

#include <stdio.h>
int main() {
   int n, sum = 0;
   // int term=0;
   printf("Enter the value of n:\t");
   scanf("%d", &n);
   for (int i = 1; i <= n; i++) 
        sum += i * (i + 1) / 2; // formula for sum of an arithmetic series(advanced)
      // term+=i;
      // sum += term; 
   printf("Sum of the series is: %d\n", sum);
   return 0;
}