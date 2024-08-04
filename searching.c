#include <stdio.h>
int main()
{
    int a[10], i, x, n,flag=0;
    printf("Enter the no of elements  ");
    scanf("%d", &n);
    printf("Enter the elements of array a \n");
    for (i = 0; i <= n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (i = 0; i <= n; i++)
    {
        printf("%d\t", a[i]);
    }
    printf("\nEnter the element to be searched\n ");
    scanf("%d", &x);
    for (i = 0; i <= n; i++)
    {
        if (a[i] == x)
        {
            printf("index of element is %d", i);
            break;
        }
        else
        flag=1;
    }
    if(flag==1)
    printf("Element not found");
    return 0;
}