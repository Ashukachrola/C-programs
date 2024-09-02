#include <stdio.h>

void main()
{
    int n, val;
    int found = 0; 

    printf("Enter size of array : ");
    scanf("%d", &n);

    int a[n];

    for(int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Enter element your want to find : ");
    scanf("%d", &val);

    int low = 0, high = n - 1;

    while(high >= low)
    {
        int  mid = low + (high - low) / 2;
        
        if(a[mid] == val)
        {
            printf("Element %d is found at index %d", val, mid);
            found = 1;
            break;
        }
        else if(a[mid] < val)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }

    if(!found)
    {
        printf("Element is not found in array");
    }
}