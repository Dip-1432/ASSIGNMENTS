// 6. Wap in C to check if a number is odd or even Using Ternary operator

#include <stdio.h>

int main() 
{
    int num;  //INITIALIZATION
    printf("Enter a number: \n");
    scanf("%d", &num);

// CHECKING AND PRINTING   ODD OR EVEN  USING TERNARY OPERATOR
    num % 2 == 0 ? printf("%d is even.\n", num) : printf("%d is odd.\n", num);

    return 0;
}