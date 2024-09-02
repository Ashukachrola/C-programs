#include <stdio.h>

void main()
{
    int n, generator = 0, sum = 0;

    printf("Enter Number : ");
    scanf("%d", &n);

    for(int i = 0; i < n; i++)
    {
        generator = (generator * 10) + 1;
        sum = sum + generator;
    }

    printf("%d", sum);
}