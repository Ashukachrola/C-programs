#include <stdio.h>

void main()
{
    int n, new_size = 0;

    printf("Enter size of array : ");
    scanf("%d", &n);

    int a[n];

    for(int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    int new[n];

    for(int i = 0; i < n; i++)
    {
        if(i == 0 || a[i] != a[i - 1])
        {
            new[new_size++] = a[i];
        }
    }

    for(int i = 0; i < new_size; i++)
    {
        printf("%d\t", new[i]);
    }
}