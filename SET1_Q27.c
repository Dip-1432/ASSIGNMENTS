// WAP in c to find out GCD and LCM of two numbers, using functions.
#include <stdio.h>
int gcd(int a, int b) 
{
   if (b == 0) 
      return a;
   else 
      return gcd(b, a % b);
}
int lcm(int a, int b) 
{
   return (a * b) / gcd(a, b);
}
int main() 
{
   int num1, num2;
   printf("Enter two numbers: \n");
   scanf("%d %d", &num1, &num2);
   printf("GCD of %d and %d is %d\n", num1, num2, gcd(num1, num2));
   printf("LCM of %d and %d is %d\n", num1, num2, lcm(num1, num2));
   return 0;
}