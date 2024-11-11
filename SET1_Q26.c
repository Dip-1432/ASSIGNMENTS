// WAP in c to find out all prime factors of a given number, using functions.
#include <stdio.h>
int prime(int num) {
   for(int i=2;i<=num/2;i++) {
      if(num%i==0)
         return 0;
   }
   return 1;
}
int main() {
   int num;
   printf("Enter a number:\t");
   scanf("%d", &num);
   printf("Prime factors:\t");
   for(int i=2;i<=num/2;i++) {
      if(prime(i) && num%i==0)
         printf("%d ", i);
   }
   return 0;
}
