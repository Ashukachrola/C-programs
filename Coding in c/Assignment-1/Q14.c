#include <stdio.h>

void main()
{
    int n, count = 0;

    printf("Enter Number :");
    scanf("%d", &n);

    while(n > 0)
    {
        if(n % 10 == 5)
        {
            count++;
        }
        else
        {
            count = 0;
        }
        if(count == 3)
        {
            break;
        }
        n = n / 10;
    }

    if(count == 3)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
}