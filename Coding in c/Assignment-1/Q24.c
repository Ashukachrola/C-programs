#include <stdio.h>

void main()
{
    int n, temp, rev = 0, x; 

    printf("Enter number : ");
    scanf("%d", &n);

    x = n;

    while(n > 0)
    {
        temp = n % 10;
        rev = rev * 10 + temp; 
        n = n / 10;
    }

    if(rev == x)
    {
        printf("Number is Palindrome");
    }
    else
    {
        printf("Number is not palindrome");    
    }
    
}

