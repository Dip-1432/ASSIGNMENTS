// 3. Wap in C that will check if a given year is leap year or not.
//A leap year is exactly divisible by 4 except for century years (years ending with 00)
//The century year is a leap year only if it is perfectly divisible by 400.

#include <stdio.h>
int main() {
    int year;
    printf("Enter a year: \n");
    scanf("%d", &year);
    if (year % 4 == 0) 
    {
        if (year % 100 == 0)
        {
            if (year % 400 == 0) 
                printf("%d is a leap year.\n", year);
            else 
                printf("%d is not a leap year.\n", year);
        } 
        else 
            printf("%d is a leap year.\n", year);
    }
    else 
        printf("%d is not a leap year.\n", year);
    return 0;
}
