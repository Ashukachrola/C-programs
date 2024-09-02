/*
@***
  ***
   ***@
*/


#include <stdio.h>
void main()
{
    int n; 
    printf("Enter n");
    scanf("%d", &n);

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < i; j++)
        {
            printf(" ");
        }
        for(int k = 0; k < n; k++)
        {
            if(i == 0 && k == 0)
            {
                printf("@");
            }
            printf("*");
            if(i == n-1 && k == i)
            {
                printf("@");
            }
        }
        
        printf("\n");
    }
}