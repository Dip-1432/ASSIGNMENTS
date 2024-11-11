//  WAP in c to Compute the telephone bill for Mr. X as per the call rates given below:
//  Rental = 250
//  1st 100 calls @Rs. 0.2
//  Next 100 calls @ Rs. 0.3
//  Remaining calls @ Rs. 0.5

#include <stdio.h>
int main()
{
   float bill=0.0;
   int calls;
   printf("Enter the number of calls:\t");
   scanf("%d", &calls);
   if (calls <= 100)
      bill = calls * 0.2 + 250;
   else if (calls <= 200)
      bill = 20 + (calls - 100) * 0.3 + 250;
   else
      bill = 20 + 30 + (calls - 200) * 0.5 + 250;
   printf("Bill amount: %.2f\n", bill);
   return 0;
}