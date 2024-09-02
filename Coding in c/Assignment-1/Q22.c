#include <stdio.h>

void set_union(int a[], int b[], int m, int n)
{
    int i = 0, j = 0;

    while(i < m && j < n)
    {
        if(a[i] < b[j])
        {
            printf("%d  ", b[j]);
            j++;
        }
        else if(b[j] < a[i])
        {
            printf("%d  ", a[i]);
            i++;
        }
        else
        {
            printf("%d  ", a[i]);
            i++;
            j++;
        }
    }
}

void main() {
    int m, n, i;

    printf("Enter the number of elements in set A: ");
    scanf("%d", &m);
    int a[m];
    printf("Enter elements of set A: ");
    for (i = 0; i < m; i++) {
        scanf("%d", &a[i]);
    }

    printf("Enter the number of elements in set B: ");
    scanf("%d", &n);
    int b[n];
    printf("Enter elements of set B: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &b[i]);
    }

    set_union(a, b, m, n);
}
