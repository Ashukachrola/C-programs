#include <stdio.h>

void main()
{
    int row_size, column_size;

    printf("Enter size of row:");
    scanf("%d", &row_size);

    printf("Enter size of column:");
    scanf("%d", &column_size);

    int arr1[row_size][column_size], arr2[row_size][column_size], arr3[row_size][column_size];

    printf("Enter Matrix 1\n");

    for(int i = 0; i < row_size; i++)
    {
        for(int j = 0; j < column_size; j++)
        {
            printf("arr[%d][%d]:", i, j);
            scanf("%d", &arr1[i][j]);
        }
    }

    printf("Enter Matrix 2\n");

    for(int i = 0; i < row_size; i++)
    {
        for(int j = 0; j < column_size; j++)
        {
            printf("arr[%d][%d]:", i, j);
            scanf("%d", &arr2[i][j]);
        }
    }

    for(int i = 0; i < row_size; i++)
    {
        for(int j = 0; j < column_size; j++)
        {
            arr3[i][j] = arr1[i][j] + arr2[i][j];
        }
    }

    printf("\nSum Matrix\n");

    for(int i = 0; i < row_size; i++)
    {
        printf("\n");
        for(int j = 0; j < column_size; j++)
        {
            printf("%d\t", arr3[i][j]);
        }
    }
}