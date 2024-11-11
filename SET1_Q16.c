// WAP in c to check whether a number is Duck (a positive integer that has at least one zero, but not if the zero is at the beginning of the number) or not.

#include <stdio.h>
int main() {
   int n,flag=0;
   printf("Enter a number:\t");
   scanf("%d", &n);
   printf("%d ", n);
   while (n) {
      int r = n % 10;
      if (r == 0) {
         flag = 1;
         break;
      }
      n /= 10;
   }
   if (flag) 
      printf("is a Duck number.\n");
   else 
      printf("is not a Duck number.\n");
   return 0;
}