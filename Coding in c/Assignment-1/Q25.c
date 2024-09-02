#include <stdio.h>
#include <math.h>

double perim(double a, double b, double c) {
    return a + b + c;
}

double area(double a, double b, double c) {
    double s = 0.5 * (a + b + c);
    return sqrt(s * (s - a) * (s - b) * (s - c));
}

double read_input()
{
    double value;
    printf("Enter Value : ");
    scanf("%lf", &value);

    return value;
}

double print_value(double val)
{
    printf("%.2f", val);

    return val;
}

void main()
{
    int a, b, c;

    printf("Enter side of triangle : \n");
    a = read_input();
    b = read_input();
    c = read_input();

    printf("Perimeter of the triangle: ");
    print_value(perim(a, b, c));

    printf("\nArea of the triangle: ");
    print_value(area(a, b, c));

}