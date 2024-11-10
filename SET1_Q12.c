//  WAP in c to Compute the telephone bill for Mr. X as per the call rates given below:
//  Rental = 250
//  1st 100 calls @Rs. 0.2
//  Next 100 calls @ Rs. 0.3
//  Remaining calls @ Rs. 0.5

#include <stdio.h>
int main()
{
   int calls;
   printf("Enter the number of calls: ");
   scanf("%d", &calls);
   if (calls <= 100)
   {
      float bill = calls * 0.2 + 250;
      printf("Bill amount: %.2f\n", bill);
   }
   else if (calls <= 200)
   {
      float bill = 100 * 0.2 + (calls - 100) * 0.3 + 250;
      printf("Bill amount: %.2f\n", bill);
   }
   else
   {
      float bill = 100 * 0.2 + 100 * 0.3 + (calls - 200) * 0.5 + 250;
      printf("Bill amount: %.2f\n", bill);
   }
   return 0;
}