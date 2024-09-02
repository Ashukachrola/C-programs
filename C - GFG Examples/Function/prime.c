#include <stdio.h>

void prime(int n)
{
    int flag = 1;

    for(int i = 2; i < n/2; i++)
    {
        if(n % i == 0)
        {
            flag = 0;
            break;
        }
        else
        {
            flag = 1;
        }
    }

    if(flag == 1)
    {
        printf("Prime Number");
    }
    else
    {
        printf("Not Prime Number");
    }
}

void main()
{
    int n = 0; 

    printf("Enter number : ");
    scanf("%d", &n);

    prime(n);
}