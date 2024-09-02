#include <stdio.h>

float fehrenhitToCelsius(float fahrenhit)
{
    return (5.0/9.0) * (fahrenhit - 32);
}

void main()
{
    float fahrenhit;

    printf("Fahrenhit\tCelsius\n");

    for(fahrenhit = -40; fahrenhit < 220; fahrenhit += 10)
    {
        printf("%f\t%f\n", fahrenhit, fehrenhitToCelsius(fahrenhit));
    }
}