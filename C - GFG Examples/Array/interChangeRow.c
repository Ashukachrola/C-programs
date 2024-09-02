#include <stdio.h>

void main()
{
    int row_size, column_size, temp;

    printf("Enter size of row:");
    scanf("%d", &row_size);

    printf("Enter size of column:");
    scanf("%d", &column_size);

    int arr[row_size][column_size];

    for(int i = 0; i < row_size; i++)
    {
        for(int j = 0; j < column_size; j++)
        {
            printf("arr[%d][%d]:", i, j);
            scanf("%d", &arr[i][j]);
        }
    }

    printf("\n\nBefore interchange");

    for(int i = 0; i < row_size; i++)
    {
        printf("\n");
        for(int j = 0; j < column_size; j++)
        {
            printf("%d\t", arr[i][j]);
        }
    }

    for(int i = 0; i < column_size; i++)
    {
        temp = arr[0][i];
        arr[0][i] = arr[row_size-1][i];
        arr[row_size-1][i] = temp; 
    }

    printf("\n\nAfter interchange\n");

    for(int i = 0; i < row_size; i++)
    {
        printf("\n");
        for(int j = 0; j < column_size; j++)
        {
            printf("%d\t", arr[i][j]);
        }
    }
}