#include <stdio.h>

void main()
{
    int n, i; 

    printf("Enter number : ");
    scanf("%d", &n);

    int a[100];

    for(i = 0; 0 < n; i++)
    {
        a[i] = n % 2;
        n = n / 2;
    }
      
    for(i = i - 1; i >= 0; i--)
    {
        printf("%d", a[i]);
    }    
}
//4 - 100