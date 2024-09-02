#include <stdio.h>

void main()
{
    float income, slab2, slab3, slab4;

    printf("Enter your income : ");
    scanf("%f", &income);

    if(income > 0 && income < 2500)
    {
        printf("Tax is 0 rs.", income);
    }

    else if(income >= 2500 && income < 5000)
    {
        slab2 = (income - 2500) * 0.10;
        printf("Tax is %.2f rs.", slab2);
    }

    else if(income >= 5000 && income < 10000)
    {
        slab3 = (2500 * 0) + (2500 * 0.10) + ((income - 5000) * 0.20);
        printf("Tax is %.2f rs.", slab3);
    }

    else if(income >= 10000)
    {
        slab4 = (2500 * 0) + (2500 * 0.10) + (5000 * 0.20) + ((income - 10000) * 0.30);
        printf("Tax is %.2f rs.", slab4);
    }
}