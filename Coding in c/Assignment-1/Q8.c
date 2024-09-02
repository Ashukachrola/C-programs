#include <stdio.h>

void main()
{
    int n, sum = 0, i = 1; 
    
    printf("Enter number : ");
    scanf("%d", &n);

    while(sum < n)
    {
        sum = sum + i;
        i++;
    }

    if(sum == n)
    {
        printf("Number is Triangular");
    }
    else
    {
        printf("Number is not triangular");
    }
}