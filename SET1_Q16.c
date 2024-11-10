// WAP in c to check whether a number is Duck (a positive integer that has at least one zero, but not if the zero is at the beginning of the number) or not.

#include <stdio.h>
int main() {
   int n;
   printf("Enter a number: ");
   scanf("%d", &n);
   int flag = 0;
   printf("%d ", n);
   while (n > 0) {
      int r = n % 10;
      if (r == 0) {
         flag = 1;
         break;
      }
      n /= 10;
   }
   if (flag == 1) {
      printf("is a Duck number.\n");
   } else {
      printf("is not a Duck number.\n");
   }
   return 0;
}