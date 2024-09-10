// 4. Wap in C that will take marks for 3 subjects and find the average and based on that print the grade.
//  Average     Grade
//  a. >=90     AA
//  b. 80-89    A
//  c. 60-79    B
//  d. 40-59    C
//  e. <40      D
#include<stdio.h>
int main() 
{
    int marks1, marks2, marks3;   //USER INPUTS
    printf("Enter marks for three subjects: \n");
    scanf("%d %d %d", &marks1, &marks2, &marks3);

    int marks=(marks1 + marks2 + marks3)/3;  //CALCULATION OF AVERAGE MARK
    
    // PRINTING RESPECTIVE GRADE FOR THE AVERAGE MARKS
    if(marks >= 90) {
        printf("Grade: AA\n");
    } 
    else if(marks >= 80) {
        printf("Grade: A\n");
    } 
    else if(marks >= 60) {
        printf("Grade: B\n");
    } 
    else if(marks >= 40) {
        printf("Grade: C\n");
    } 
    else {
        printf("Grade: D\n");
    }
    return 0;
}
