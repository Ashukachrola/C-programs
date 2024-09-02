#include <stdio.h>
#include <stdbool.h>

void main()
{
    int row_size, column_size;
    bool areEqual = true;

    //For matrix 1

    printf("Enter Number of Rows:");
    scanf("%d", &row_size);

    printf("Enter Number of Columns:");
    scanf("%d", &column_size);

    int arr1[row_size][column_size];

    for(int i = 0; i < row_size; i++)
    {
        for(int j = 0; j < column_size; j++)
        {
            printf("arr[%d][%d]:", i, j);
            scanf("%d", &arr1[i][j]);
        }
    }

    //For matrix 2

    int arr2[row_size][column_size];

    for(int i = 0; i < row_size; i++)
    {
        for(int j = 0; j < column_size; j++)
        {
            printf("arr[%d][%d]:", i, j);
            scanf("%d", &arr2[i][j]);
        }
    }
    int total = row_size + column_size;

    for(int i = 0; i < total; i++)
    {
        for(int j = 0; j < total; j++)
        {
            if(arr1[i][j] != arr2[i][j])
            {
                areEqual = false;
                break;
            }   
        }
    }  

    if(areEqual = true)
    {
        printf("Matrix are equal");
    }
    else
    {
        printf("Matrix are not equal");
    }
}