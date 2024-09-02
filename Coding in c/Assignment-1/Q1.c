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

    int n, temp, sum = 0, x, noOfDigits = 0;

    printf("Enter Number : ");
    scanf("%d", &n);
        
    x = n;

    while (n > 0)
    {
        n = n / 10;

        noOfDigits++;
    }

    n = x;

    while (n > 0)
    {
        temp = n % 10;
        n = n / 10;

        sum = getPower(temp, noOfDigits) + sum;
    }

    printf("\nSum = %d\n", sum);

    if(sum == x)
    {
        printf("\nNumber is Armstrong\n");
    }
    else
    {
        printf("\nNumber is not Armstrong\n");
    }
}
