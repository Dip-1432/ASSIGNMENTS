// WAP in c to check whether a number is Peterson (xyz=x!+y!+z!) or not.

#include <stdio.h>
int main(){
   int n, temp, flag = 0;
   printf("Enter a number: ");
   scanf("%d", &n);
   temp=n;
   int s=0;
   while(n>0){
      int r=n%10;
      int f=1;
      for (int i=1;i<=r;i++){
         f=f*i;
      }
      s+=f;
      n/=10;
   }
   if (temp==s)
      printf("%d is a Peterson number.\n", temp);
   else
      printf("%d is not a Peterson number.\n", temp);
   return 0;
}
