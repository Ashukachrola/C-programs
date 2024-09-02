#include <stdio.h>

void main()
{
    int n, count = 0;

    printf("Enter number :");
    scanf("%d", &n);

    for(int i = 0; i < n; i++)
    {
        count++;
        for(int j = 0; j <= i; j++)
        {
            printf("%d", count);
        }
        printf("\n");
    }
}