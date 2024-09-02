#include <stdio.h>

void main()
{
    int n;

    printf("Enter size of array : ");
    scanf("%d", &n);

    int a[n];

    for(int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    int sum = 0;
    float average;

    for(int i = 0; i < n; i++)
    {
        sum = a[i] + sum;
    }

    average = (float)sum / n;

    printf("Average : %.2f", average);
}