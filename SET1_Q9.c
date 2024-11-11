// 9. Wap in C that will take a month and find out total numbers of days till that given month 
//    using the switch case(considering the year is not leap year)

#include <stdio.h>

int main()
{
    int month, days; //INITIALIZATION
    printf("\n1.January\n2.February\n3.March\n4.April\n5.May\n6.June\n7.July\n8.August\n9.September\n10.October\n11.November\n12.December\n");
    printf("Enter the month (1-12): ");
    scanf("%d", &month);

// FINDING THE TOTAL NUMBER OF DAYS UPTO THE MONTH OF USERS CHOICE USING SWITCH CASE....
    switch (month) 
    {
        case 1:
            days=31;
            break;
        case 2:
            days=31+28;
            break;
        case 3:
            days=31+28+31;
            break;
        case 4:
            days=31+28+31+30;
            break;
        case 5:
            days=31+28+31+30+31;
            break;
        case 6:
            days=31+28+31+30+31+30;
            break;
        case 7:
            days=31+28+31+30+31+30+31;
            break;
        case 8:
            days=31+28+31+30+31+30+31+31;
            break;
        case 9:
            days=31+28+31+30+31+30+31+31+30;
            break;
        case 10:
            days=31+28+31+30+31+30+31+31+30+31;
            break;
        case 11:
            days=31+28+31+30+31+30+31+31+30+31+30;
            break; 
        case 12:
            days=31+28+31+30+31+30+31+31+30+31+30+31;
            break;
        default:
            printf("Invalid month!\n");      
    }
    printf("Total number of days is: %d\n", days);
    return 0;
}