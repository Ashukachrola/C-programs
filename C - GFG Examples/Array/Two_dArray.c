#include <stdio.h>

void main()
{
    int row, column;

    printf("Enter size of row : ");
    scanf("%d", &row);

    printf("Enter size of column : ");
    scanf("%d", &column);

    int a[row][column];

    printf("Enter elements : ");

    for(int i = 0; i < row; i++)
    {
        for(int j = 0; j < column; j++)
        {
            printf("Enter a[%d][%d]: ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    for(int i = 0; i < row; i++)
    {
        printf("\n");
        for(int j = 0; j < column; j++)
        {
            printf("%d \t", a[i][j]);
        }
    }

}