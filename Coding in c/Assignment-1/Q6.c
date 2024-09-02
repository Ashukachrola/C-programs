#include <stdio.h>

void main()
{
    int num1, num2, sumOfNum1 = 0, sumOfNum2 = 0;

    printf("Enter Number 1 and 2: ");
    scanf("%d %d", &num1, &num2);

    for(int i = 1; i < num1-1; i++)
    {
        if(num1 % i == 0)
        {
            sumOfNum1 = sumOfNum1 + i;
        }
    }

    for(int i = 1; i < num2-1; i++)
    {
        if(num2 % i == 0)
        {
            sumOfNum2 = sumOfNum2 + i;
        }
    }
    if(sumOfNum1 == num2 && sumOfNum2 == num1)
    {
        printf("Number is Amicable");
    }
    else
    {
        printf("Number is not Amicable");
    }
}