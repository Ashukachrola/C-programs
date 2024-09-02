#include <stdio.h>

void main()
{
    int n, rotation, temp; 

    printf("Enter size of array :");
    scanf("%d", &n);

    int a[n];

    for(int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Enter roation number : ");
    scanf("%d", &rotation);

    for(int i = 0; i < rotation; i++)
    {
        temp = a[0];
        for(int j = 0; j < n - 1; j++)
        {
            a[j] = a[j + 1]; 
        }
        a[n - 1] = temp;
    }

    for(int i = 0; i < n; i++)
    {
        printf("%d\t", a[i]);
    }
}