//Swap two numbers

#include <stdio.h>

void main()
{
    int n1 = 30, n2 = 40, temp;

    temp = n1;
    n1 = n2;
    n2 = temp;

    printf("n1 = %d and n2 = %d", n1, n2);
}