/*
****
***
**
*
*/

#include <stdio.h>

void main()
{
    int n;

    printf("Enter number : ");
    scanf("%d", &n);

    for(int i = 0; i < n; i++)
    {
        for(int j = n - 1; j >= i; j--)
        {
            printf("* ");
        }
        printf("\n");
    }
}