// WAP in c to find out all prime numbers within a given range, using functions.
#include <stdio.h>
int prime(int num){
   for(int i=2;i<=num/2;i++){
      if(num%i==0){
         return 0;
      }
   }
   return 1;
}
int main(){
   int start, end;
   printf("Enter the lower range: ");
   scanf("%d", &start);
   printf("Enter the upper range: ");
   scanf("%d", &end);
   printf("Prime numbers: ");
   for(int i=start;i<=end;i++){
      if(prime(i)){
         printf("%d ", i);
      }
   }
   return 0;
}
