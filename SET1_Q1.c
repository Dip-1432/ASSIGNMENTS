// 1. Wap in C that Will find the area and perimeter of
// Square,Rectangle,Circle,Triangle.
/*   ALGORITHMS
     SQUARE:     AREA-SIDE*SIDE                    PERIMETER-4*SIDE
     RECTANGLE:  AREA-LENGTH*BREADTH               PERIMETER-2*(LENGTH + BREADTH)
     CIRCLE:     AREA-3.14*RADIUS*RADIUS           PERIMETER-2*3.14.RADIUS
     TRIANGLE:   AREA-sqrt of [s(s−a)(s−b)(s−c)]​   PERIMETER-a+b+c  [a,b,c-sides...s=(a+b+c)/2]
*/

#include <stdio.h>
#include<math.h>

int main()
{
    double side,length,breadth,radius,s1,s2,s3;      //INITIALIZATION FOR USER INPUT
    double ar1,ar2,ar3,ar4,pe1,pe2,pe3,pe4;          //INITIALIZATION FOR CALCULATIONS
//USER INPUTS
    printf("Enter the side of square : \n");
    scanf("%lf",&side);
    printf("Enter the length and breadth of rectangle : \n");
    scanf("%lf %lf",&length,&breadth);
    printf("Enter the radius of circle : \n");
    scanf("%lf",&radius);
    printf("Enter the sides of triangle : \n");
    scanf("%lf %lf %lf",&s1,&s2,&s3);

//FOR SQUARE
    pe1=4*side;
    ar1=side*side;
    printf("The area and perimeter of the square are : %.2lf & %.2lf \n",ar1,pe1);

//FOR RECTANGLE
    pe2=2*(length + breadth);
    ar2=length*breadth;
    printf("The area and perimeter of the rectangle are : %.2lf & %.2lf \n",ar2,pe2);

//FOR TRIANGLE
    pe3=2*3.14*radius;
    ar3=3.14*radius*radius;
    printf("The area and perimeter of the triangle are : %.2lf & %.2lf \n",ar3,pe3);

//FOR CIRCLE
    pe4=s1+s2+s3;
    double sp=pe4/2;
    ar4=sqrt(sp * (sp - s1) * (sp - s2) * (sp - s3));
    printf("The area and perimeter of the circle are : %.2lf & %.2lf \n",ar4,pe4);

    return 0;
}