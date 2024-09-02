#include <stdio.h>

int getPower(int num, int power)
{
    int result = 1;

    while(power > 0)
    {
        result = result * num;
        power--;
    }

    return result;
}

void main()
{
    int n, sum = 0, sum1 = 0;
    float meanValue, variance;

    printf("Enter Size of array : ");
    scanf("%d", &n);

    int a[n];

    for(int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    for(int i = 0; i < n; i++)
    {
        sum = sum + a[i];
    }

    meanValue = (float)sum/n;

    printf("\nMean : %f\n", meanValue);

    for(int i = 0; i < n; i++)
    {
        sum1 = sum1 + getPower((a[i] - meanValue), 2);
    }

    variance = (float)sum1 / (n - 1);

    printf("\nVariance : %f\n", variance);
}