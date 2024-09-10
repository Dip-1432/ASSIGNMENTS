// 8. Wap in C that will implement a Menu driven program which will take 2 numbers and 
//    perform addition,subtraction,multiplication,division using switch case.

#include <stdio.h>

int main()
{
    int choice, num1, num2; //USER INPUTS
    printf("Enter two numbers: \n");
    scanf("%d %d", &num1, &num2);

// MENU GIVING THE CHOICE TO USER TO PERFORM RESPECTIVE MATHEMATICAL OPERATION ON THE 2 NUMBERS
    printf("\n1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n");
    printf("Enter your choice (1-4): \n");
    scanf("%d", &choice);

// PERFORMING MATHEMATICAL OPERATIONS BASED ON USERS CHOICE USING SWITCH CASE
    switch (choice) 
    {
        case 1:
            printf("Addition: %d + %d = %d\n", num1, num2, num1 + num2);
            break;
        case 2:
            printf("Subtraction: %d - %d = %d\n", num1, num2, num1 - num2);
            break;
        case 3:
            printf("Multiplication: %d * %d = %d\n", num1,num2, num1*num2);
            break;
        case 4:
            if (num2 == 0) {
                printf("Error: Division by zero is not allowed.\n");
                break;
            }
            printf("Division: %d / %d = %.2f\n", num1, num2, (float)num1 / num2);
            break;
        default:
            printf("Invalid choice. Please enter a number between 1 and 4.\n");
    }
    return 0;
}