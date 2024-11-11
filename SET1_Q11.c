// WAP in c to take a number and check whether it is odd or even using bit-wise operator.
#include <stdio.h>
int main()
{
   int num;
   printf("Enter a number:\t");
   scanf("%d", &num);
   if (num & 1)
      printf("%d is odd.\n", num);
   else
      printf("%d is even.\n", num);
   return 0;
}