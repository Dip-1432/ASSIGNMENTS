// WAP in c to check whether a number is Armstrong (xyz=x^3+y^3+z^3) or not.

#include <stdio.h>
int main(){
   int num, r, sum = 0, o_num;
   printf("Enter a number:\t");
   scanf("%d", &num);
   o_num = num;
   while (num)
   {
      r = num % 10;
      sum += r * r * r;
      num /= 10;
   }
   if (sum == o_num)
      printf("%d is an Armstrong number.", o_num);
   else
      printf("%d is not an Armstrong number.", o_num);
   return 0;
}