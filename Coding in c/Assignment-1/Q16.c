#include <stdio.h>

void main()
{
    int a[10], sumOfEven = 0, sumOfOdd = 0, sumOfNegative = 0;

    printf("Enter Values : \n");

    for(int i = 0; i < 10; i++)
    {
        scanf("%d", &a[i]);
        if(a[i] % 2 == 0)
        {
            sumOfEven++;
        }
        else
        {
            sumOfOdd++;
        }
        if(a[i] < 0)
        {
            sumOfNegative++;
        }
    }
    printf("Even : %d\n", sumOfEven);
    printf("Odd : %d\n", sumOfOdd);
    printf("Negative : %d\n", sumOfNegative);
}