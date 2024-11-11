// WAP in c to calculate the sum of the series
// x - x^3/3! + x^5/5! - x^7/7! + x^9/9!........upto n terms.

#include <stdio.h>
#include <math.h>
int main(){
   int n, x ;
   printf("Enter the value of n:\t");
   scanf("%d", &n);
   printf("Enter the value of x:\t");
   scanf("%d", &x);
   int fact,c=1;
   float sum=0;
   for (int i = 1; i < 2*n; i += 2) {
      fact = 1;
      for (int j = 1; j <= i; j++) 
            fact *= j;
      sum += pow(x, i) / (fact*c);
      c *= -1;
   }
   printf("Sum of the series: %.2f", sum);
   return 0;
}