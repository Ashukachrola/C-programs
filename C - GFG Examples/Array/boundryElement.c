#include <stdio.h>

void main()
{
    int row_size, column_size;

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

    printf("Actual Matrix\n");

    for(int i = 0; i < row_size; i++)
    {
        printf("\n");
        for(int j = 0; j < column_size; j++)
        {
            printf("%d\t", arr[i][j]);
        }
    }

    printf("\nBoundry Element\n");

    for(int i = 0; i < row_size; i++)
    {
        printf("\n");
        for(int j = 0; j < column_size; j++)
        {
            if(i == 0 || j == 0 || i ==  column_size - 1 || j == column_size - 1)
            {
                printf("%d\t", arr[i][j]);
            }
            else
            {
                printf("\t");
            }
        }
    }
}