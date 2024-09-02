#include <stdio.h>

void main()
{
    int n; 

    printf("Enter n : ");
    scanf("%d", &n);

    int a[n], new[n], val;

    for(int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Enter value your want to remove : ");
    scanf("%d", &val);

    for(int i = 0; i < n; i++)
    {
        if(a[i] != val)
        {
            printf("%d ", a[i]);
        }
    }

    for(int i = 0; i < n; i++)
    {
        printf("%d\t", new[i]);
    }
}