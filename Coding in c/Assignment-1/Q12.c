#include <stdio.h>

float sumOfPrice(float price[], int n)
{
    float total = 0.0;
    for(int i = 0; i < n; i++)
    {
        total = total + price[i];
    }
    return total;
}

float calculateDiscount(float total)
{
    float discount = 0.0;

    if(total < 1000)
    {
        discount = total * 0.05;
    }
    else if(total >= 1000 && total < 5000)
    {
        discount = total * 0.10;
    }
    else
    {
        discount = total * 0.15;
    }
    return discount;
}

void getResult(float price[], int n)
{
    float total = sumOfPrice(price, n);
    float discount = calculateDiscount(total);
    float finalPrice = total - discount;

    printf("Item Prices:\n");
    for (int i = 0; i < n; i++) {
        printf("Item %d: Rs. %.2f\n", i+1, price[i]);
    }
    printf("\nTotal: Rs. %.2f\n", total);
    printf("Discount: Rs. %.2f\n", discount);
    printf("Final Price: Rs. %.2f\n", finalPrice);
}

void main()
{
    int n;

    printf("Enter Number of Products : ");
    scanf("%d", &n);

    float price[n];

    printf("Enter Price of products :\n");

    for(int i = 0; i < n; i++)
    {
        printf("Product %d :", i+1);
        scanf("%f", &price[i]);
    }

    getResult(price, n);
}