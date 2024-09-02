#include <stdio.h>

void main()
{
    int once, tens;

    printf("Numbers : \n");

    for(tens = 0; tens < 10; tens++)
    {
        for(once = 0; once < 10; once++)
        {
            if((once + tens) % 7 == 0)
            {
                printf("%d%d\n",tens, once);
            }
        }
    }
}