#include <stdio.h>

void main()
{
    int n;

    printf("Enter size of array : ");
    scanf("%d", &n);

    int a[n], b[n], c[n], d[n];

    printf("Enter Array A elements : \n");

    for(int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Enter Array B elements : \n");

    for(int i = 0; i < n; i++)
    {
        scanf("%d", &b[i]);
    }

    for(int i = 0; i < n; i++)
    {
        c[i] = a[i] + b[i];
    }

    printf("Sum of Array A and Array B elements : \n");

    for(int i = 0; i < n; i++)
    {
        printf("%d : %d\n", i, c[i]);
    }

    for(int i = 0; i < n; i++)
    {
        d[i] = a[i] * b[i];
    }

    printf("Multiplication of Array A and Array B elements : \n");

    for(int i = 0; i < n; i++)
    {
        printf("%d : %d\n", i, d[i]);
    }
}