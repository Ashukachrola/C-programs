#include <stdio.h>

void main()
{
    int n;

    printf("Enter Number : ");
    scanf("%d", &n);

    for(int i = 0; i < n; i++)
    {
        for(int k = 0; k < i; k++)
        {
            printf(" ");
        }
        for(int j = i; j < n; j++)
        {
           printf("*"); 
        }
        printf("\n");
    }
}