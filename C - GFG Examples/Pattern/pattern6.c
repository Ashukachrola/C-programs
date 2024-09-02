/*
    1
   232
  34543
 4567654
567898765
*/
#include <stdio.h>

void main()
{
    int n, num = 0, num2 = 0;

    printf("Enter number : ");
    scanf("%d", &n);

    for(int i = 0; i < n; i++)
    {
        int temp = i;
        for(int j = n; j > i; j--)
        {
            printf(" ");
        }

        for(int k = 0; k <= i; k++)
        {
            num = temp + 1;
            printf("%d", num);
            temp++;
        }

        for(int l = 0; l < i; l++)
        {
            num--;
            printf("%d", num);
        }
        
        printf("\n");
    }
}