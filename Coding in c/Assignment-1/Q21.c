#include <stdio.h>

void main()
{
    int n, mul, sum = 0;

    printf("Enter size of an array : ");
    scanf("%d", &n);

    int a[n];

    for(int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    
    for(int i = 0; i < n - 1; i++)
    {
        mul = a[i] * a[i + 1];
        sum = sum + mul;
    }
    printf("%d", sum);
}