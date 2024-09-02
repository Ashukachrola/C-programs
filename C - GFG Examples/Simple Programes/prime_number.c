//Check Number is Prime of not

#include <stdio.h>

void main()
{
    int n, flag = 1;

    printf("Enter Number : ");
    scanf("%d", &n);

    for(int i = 2; i < n / 2; i++)
    {
        if(n % i == 0)
        {
            flag = 0;
            break;
        }
    }

    if(flag)
    {
        printf("Number is prime number");
    }
    else
    {
        printf("Number is not Prime Number");
    }
}