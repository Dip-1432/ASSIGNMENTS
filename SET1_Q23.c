// WAP in c to print the following pattern.
/*
*             *
* *         * *
* * *     * * *
* * * * * * * *
* * *     * * *
* *         * *
*             *
*/
#include<stdio.h>
int main(){
   int n;
   printf("Enter the number of rows:\n");
   scanf("%d",&n);
   for(int i=1;i<n*2;i++){
      int limit =(i<=n)? i : (n*2-i);
      for (int j=1;j<=limit;j++)
         printf("* ");
      for (int k=n;k>limit;k--)
         printf("  ");
      for (int k=n;k>limit;k--)
         printf("  ");
      for (int j=1;j<=limit;j++)
         printf("* ");
      printf("\n");
   }
   return 0;
}