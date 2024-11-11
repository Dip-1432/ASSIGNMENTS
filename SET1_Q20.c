// WAP in c to print the following pattern.
/*
4 3 2 1
3 2 1
2 1 
1
*/
#include<stdio.h>
int main()
{
   //  printf("\033[32;1m");  //ansi codes for green color and bold
   int n;
   printf("Enter the number of rows:\t");
   scanf("%d",&n);
   for(int i=n;i>=1;--i)
   {
      for(int j=i;j>=1;--j)
            printf("%d ",j);
      printf("\n");
   }
   return 0;
}