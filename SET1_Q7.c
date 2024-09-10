// 7. Wap in C that will find the maximum and minimum among 3 numbers using the ternary operator

#include <stdio.h>

int main() 
{
    int num1, num2, num3;  //USER INPUTS
    printf("Enter three numbers: \n");
    scanf("%d %d %d", &num1, &num2, &num3);

     // Checking if all numbers are equal. If yes, print the message and return 0.
    if(num1==num2 && num2==num3)
    {
        printf("All numbers are equal.\n");
        return 0;  // Return 0 to terminate the program if all numbers are equal.
    }

// FINDING MAX & MIN THEN ASSIGNING THEM INTO VARIABLES USING TERNARY OPERATOR
    int max = num1 > num2 ? (num1 > num3 ? num1 : num3) : (num2 > num3 ? num2 : num3);
    int min = num1 < num2 ? (num1 < num3 ? num1 : num3) : (num2 < num3 ? num2 : num3);

// PRINTING THE RESULTS
    printf("Maximum: %d\n", max);
    printf("Minimum: %d\n", min);

    return 0;
}