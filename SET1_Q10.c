// WAP in c to calculate simple interest and compound interest
#include <stdio.h>
#include <math.h>
int main()
{
   float p, r, t, si, ci;
   printf("Enter the principal amount:\t");
   scanf("%f", &p);
   printf("Enter the rate of interest:\t");
   scanf("%f", &r);
   printf("Enter the time period:\t");
   scanf("%f", &t);
   si = (p * r * t) / 100;
   ci = p * pow(1 + r / 100, t) - p;
   printf("Simple interest: %.2f\n", si);
   printf("Compound interest: %.2f\n", ci);
   return 0;
}
