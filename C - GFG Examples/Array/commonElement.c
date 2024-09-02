#include <stdio.h>

void main()
{
    int size1, size2;

    printf("Enter size of array 1: ");
    scanf("%d", &size1);

    int a1[size1];
    printf("Enter Array 1 elements : \n");
    for(int i = 0; i < size1; i++)
    {
        scanf("%d", &a1[i]);
    }

    printf("Enter size of array 2: ");
    scanf("%d", &size2);

    int a2[size2];
    printf("Enter Array 2 elements : \n");
    for(int i = 0; i < size2; i++)
    {
        scanf("%d", &a2[i]);
    }

    for(int i = 0; i < size1; i++)
    {
        for(int j = 0; j < size2; j++)
        {
            if(a1[i] == a2[j])
            {
                printf("%d\t", a1[i]);
                break;
            }
        }
    }
}