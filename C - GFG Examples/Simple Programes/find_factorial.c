//Find factorial

#include <stdio.h>

void main()
{
    int n, mul = 1;

    printf("Enter Number : ");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++)
    {
        mul = mul * i;
    }

    printf("%d", mul);
}