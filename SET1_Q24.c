// WAP in c to check whether a number is palindrome or not,using functions.

#include <stdio.h>
int reverse(int num){
   int rev = 0, rem;
   while (num)
   {
      rem = num % 10;
      rev = rev * 10 + rem;
      num /= 10;
   }
   return rev;
}
int main() {
   int num;
   printf("Enter a number:\n");
   scanf("%d", &num);
   int rev = reverse(num);
   if (rev == num)
      printf("%d is a palindrome number.", num);
   else
      printf("%d is not a palindrome number.", num);
   return 0;
}