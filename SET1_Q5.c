// 5. Wap in C that will take the MRP of an item as input and based on the price
//    range provide some discount and find out the ultimate selling price.
//        MRP                    Discount
//        i. 5000-9999           5%
//        ii. 10000-19999        10%
//        iii. 20000-39999       15%
//        iv. 40000-49999        20%
//        v. 50000 above         25%
#include<stdio.h>
int main() 
{
    double mrp, discount;    //INITIALIZATION
    printf("Enter the MRP: \n");
    scanf("%lf", &mrp);

    // calculation of discount based on MRP range
    if(mrp < 5000)
        discount = 0 * mrp;
    else if(mrp >= 5000 && mrp < 10000)
        discount = 0.05 * mrp;
    else if(mrp >= 10000 && mrp < 20000)
        discount = 0.10 * mrp;
    else if(mrp >= 20000 && mrp < 40000)
        discount = 0.15 * mrp;
    else if(mrp >=40000 && mrp < 50000)
        discount = 0.20 * mrp;    
    else
        discount = 0.25 * mrp;

    // Calculating the ultimate selling price
    double finalPrice = mrp - discount;

    printf("The ultimate selling price is: %.2lf\n", finalPrice );
    return 0;
}
