#include <stdio.h>

void main()
{
    int n, temp;

    printf("Enter size of Array: ");
    scanf("%d", &n);

    int a[n];

    for(int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    for(int j = 0; j < n; j++)
    {
        for(int i = 0; i < n; i++)
        {
            if(a[i + 1] < a[i])
            {
                temp = a[i];
                a[i] = a[i + 1];
                a[i + 1] = temp;
            }
        }
    }
    for(int i = 0; i < n; i++)
    {
        printf("%d\t", a[i]);
    }
}