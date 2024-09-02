#include <stdio.h>

void main()
{
    float units, rs = 0;

    printf("Enter Units : ");
    scanf("%f", &units);

    if (units <= 200)
    {
        rs = units * 1;
    }
    else if (units > 200 && units <= 300)
    {
        rs = 200 * 1 + (units - 200) * 1.5;
    } 
    else
    {
        rs = 200 * 1 + 100 * 1.5 + (units - 300) * 2;
    }

    printf("total amount = %f", rs);
}