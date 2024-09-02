#include <stdio.h>

void main()
{
    float basicSalary, grossSalary;

    printf("Enter Basic Salary : ");
    scanf("%f", &basicSalary);

    if(basicSalary > 0 && basicSalary <= 4000)
    {
        grossSalary = basicSalary + (basicSalary * 0.10) + (basicSalary * 0.50);
        printf("%f\n", grossSalary);
    }
    else if(basicSalary > 4000 && basicSalary <= 8000)
    {
        grossSalary = basicSalary + (basicSalary * 0.20) + (basicSalary * 0.60);
        printf("%f\n", grossSalary);
    }
    else if(basicSalary > 8000 && basicSalary <= 12000)
    {
        grossSalary = basicSalary + (basicSalary * 0.25) + (basicSalary * 0.70);
        printf("%f\n", grossSalary);
    }
    else if(basicSalary > 12000)
    {
        grossSalary = basicSalary + (basicSalary * 0.30) + (basicSalary * 0.80);
        printf("%f\n", grossSalary);
    }
}