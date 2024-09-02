#include <stdio.h>

void main()
{
    int n, temp;

    printf("Enter size of array : ");
    scanf("%d", &n);

    int a[n];

    for(int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    for(int i = 0; i < n; i++)
    {
        for(int i = 0; i < n - 1; i++)
        {
            if(a[i] < a[i + 1])
            {
                temp = a[i];
                a[i] = a[i + 1];
                a[i + 1] = temp;
            }
        }
    }

    printf("sorted array : \n");

    for(int i = 0; i < n; i++)
    {
        printf("%d\n", a[i]);
    }
}