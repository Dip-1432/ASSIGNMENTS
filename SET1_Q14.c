// WAP in c to check whether a number is Armstrong (xyz=x^3+y^3+z^3) or not.

#include <stdio.h>
int main(){
   int num, temp, sum = 0, original_num;
   printf("Enter a number: ");
   scanf("%d", &num);
   original_num = num;
   while (num > 0)
   {
      temp = num % 10;
      sum += temp * temp * temp;
      num /= 10;
   }
   if (sum == original_num)
   {
      printf("%d is an Armstrong number.", original_num);
   }
   else
   {
      printf("%d is not an Armstrong number.", original_num);
   }
   return 0;
}