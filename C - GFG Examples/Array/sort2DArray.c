#include <stdio.h>

void main()
{
    int size_row, size_column, temp;

    printf("Enter size of rows : ");
    scanf("%d", &size_row);

    printf("Enter size of column : ");
    scanf("%d", &size_column);

    int arr[size_row][size_column];

    printf("Enter Elements of row and column : \n");

    for(int i = 0; i < size_row; i++)
    {
        for(int j = 0; j < size_column; j++)
        {
            printf("arr[%d][%d] : ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }

    for(int i = 0; i < size_row; i++)
    {
        for(int j = 0; j < size_column - 1; j++)
        {
            for(int k = 0; k < size_column - j - 1; k++)
            if(arr[i][k] > arr[i][k+1])
            {
                temp = arr[i][k];
                arr[i][k] = arr[i][k+1];
                arr[i][k+1] = temp;
            }
        }
    }

    for(int i = 0; i < size_row; i++)
    {
        printf("\n");
        
        for(int j = 0; j < size_column; j++)
        {
            printf("%d\t", arr[i][j]);
        }
    }

}