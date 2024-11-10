// 2. Wap in C that will take 3 numbers and find the maximum and minimum among them
#include <stdio.h>
int main()
{
    double a,b,c;         //INITIALIZATION FOR USER INPUT
    double min,max;      //INITIALIZATION FOR CALCULATION
    printf("Enter three numbers(can be decimal also) to find out max and min: \n");
    scanf("%lf %lf %lf",&a,&b,&c);

    // Checking if all numbers are equal. If yes, print the message and return 0.
    if(a==b && b==c)
    {
        printf("All numbers are equal.\n");
        return 0;  // Return 0 to terminate the program if all numbers are equal.
    }

    // Finding MAXIMUM & MINIMUM among the three numbers
    else if(a>b && a>c)
    {
        max=a;
        if(b>=c)
            min=c;
        else
            min=b;
    }
    else if (b>c && b>a)
    {
        max=b;
        if(c>=a)
            min=a;
        else
            min=c;
    }
    else 
    {
        max=c;
        if(a>=b)
            min=b;
        else
            min=a;
    }

    printf("Maximum: %.2lf\n",max);   // printing the maximum
    printf("Minimum: %.2lf\n",min);   // printing the minimum
    return 0;
}
