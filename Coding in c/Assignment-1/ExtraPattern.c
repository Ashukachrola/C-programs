#include <stdio.h>

void main()
{
    int n; 
    
    printf("Enter number : ");
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
}