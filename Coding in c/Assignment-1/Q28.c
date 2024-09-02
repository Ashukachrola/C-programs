#include <stdio.h>

void main()
{
    int date, month, year;

    printf("Enter date : ");
    scanf("%d", &date);

    printf("Enter month in number : ");
    scanf("%d", &month);

    printf("Enter year : ");
    scanf("%d", &year);

    switch (month)
    {
        case 1:
        {
            printf("%dth January, %d", date, year);
            break;
        }
        case 2:
        {
            printf("%dth February, %d", date, year);
            break;
        }
        case 3:
        {
            printf("%dth March, %d", date, year);
            break;
        }
        case 4:
        {
            printf("%dth April, %d", date, year);
            break;
        }
        case 5:
        {
            printf("%dth May, %d", date, year);
            break;
        }
        case 6:
        {
            printf("%dth June, %d", date, year);
            break;
        }
        case 7:
        {
            printf("%dth July, %d", date, year);
            break;
        }
        case 8:
        {
            printf("%dth Augest, %d", date, year);
            break;
        }
        case 9:
        {
            printf("%dth September, %d", date, year);
            break;
        }
        case 10:
        {
            printf("%dth October, %d", date, year);
            break;
        }
        case 11:
        {
            printf("%dth November, %d", date, year);
            break;
        }
        case 12:
        {
            printf("%dth December, %d", date, year);
            break;
        }
    default:
        break;
    }
}