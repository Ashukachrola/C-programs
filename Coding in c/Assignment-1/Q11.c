#include <stdio.h>

void main()
{
    int n, sumOfEven = 0, sumOfOdd = 0;

    printf("Enter size of array :");
    scanf("%d", &n);

    int a[n];

    for(int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    for(int i = 0; i < n; i++)
    {
        if(a[i] % 2 == 0)
        {
            sumOfEven = sumOfEven + a[i];
        }
        else
        {
            sumOfOdd = sumOfOdd + a[i];
        }
    }

    if(sumOfEven > sumOfOdd)
    {
        printf("Even number sum is maximum:%d", sumOfEven);
    }
    else
    {
        printf("Odd number sum id maximum:%d", sumOfOdd);
    }
}