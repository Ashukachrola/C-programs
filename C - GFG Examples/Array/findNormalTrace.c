#include <stdio.h>
#include <math.h>

void main()
{
    int row_size, column_size, trace = 0, sum = 0, normal;

    printf("Enter size of row : ");
    scanf("%d", &row_size);

    printf("Enter size of column : ");
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

    for(int i = 0; i < row_size; i++)
    {
        for(int j = 0; j < column_size; j++)
        {
            if(i == j)
            {
                trace = trace + arr[i][j];
            }
            sum = sum + (arr[i][j]*arr[i][j]);
            normal = sqrt(sum);
        }
    }

    printf("Normal : %d\n", normal);
    printf("trace : %d\n", trace);
}