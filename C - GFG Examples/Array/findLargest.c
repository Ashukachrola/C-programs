#include <stdio.h>

void main()
{
    int n, largest_number; 

    printf("Enter size of array : ");
    scanf("%d", &n);

    int a[n];

    for(int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    for(int i = 0; i < n - 1; i++)
    {
        if(a[i] > a[i + 1])
        {
            largest_number = a[i];
        }
        else
        {
            largest_number = a[i + 1];
        }
    }

    printf("Largest Number: %d", largest_number);
}