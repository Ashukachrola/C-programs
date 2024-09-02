#include <stdio.h>

void main()
{
    int n, square, rem, sum = 0; 

    printf("Enter number : ");
    scanf("%d", &n);

    square = n * n;

    while(square > 0)
    {
        rem = square % 10;
        sum = sum + rem;
        square = square / 10;
    }

    if(sum == n)
    {
        printf("Number is Neon");
    }
    else
    {
        printf("Number is not Neon");
    }
}