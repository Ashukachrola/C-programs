/*
      *
     * *
    * * *
     * *
      *  
*/
#include <stdio.h>

void main()
{
    int n;

    printf("Enter Number : ");
    scanf("%d", &n);

    for(int i = 0; i < n; i++)
    {
        for(int j = n; j > i; j--)
        {
            printf(" ");
        }

        for(int k = 0; k <= i; k++)
        {
            printf("* ");
        }

        printf("\n");
    }

    for(int i = 1; i < n; i++)
    {
        for(int j = 0; j <= i; j++)
        {
            printf(" ");
        }

        for(int k = i; k < n; k++)
        {
            printf("* ");
        }

        printf("\n");
    }
}