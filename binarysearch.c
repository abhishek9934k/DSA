#include <stdio.h>
int main()
{
    int a[10], i, x, n, low = 0, mid, high;
    int flag = 0;
    printf("Enter the no of elements  ");
    scanf("%d", &n);
    printf("Enter the elements of array a \n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (i = 0; i < n; i++)
    {
        printf("%d\t", a[i]);
    }
    printf("\nEnter the element to be searched\n ");
    scanf("%d", &x);
    high = n - 1;
    while (low<=high)
    {
        mid = (low + high) / 2;
        if (x == a[mid])
        {
            flag = 1;
            break;
        }
        else
        {
            if (x<a[mid])
            {
                high = mid - 1;
                // flag=0;
            }
            else
            {
                low = mid + 1;
                // flag=0;
            }
        }
    }
    if (flag == 1)
        printf("Index of the element is %d", mid);
    else
        printf("Element not found");
    return 0;
}