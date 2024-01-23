#include<stdio.h>

void main()
{
    int a[10],n,i, j, temp	;
    
    printf("enter the no of array elements");
    scanf("%d", &n);
    
    printf("enter the array elements");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    
    // Bubble Sort
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n-i-1; j++)
        {
            if (a[j] > a[j+1])
            {
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }

    printf("Sorted array: ");
    for(j = 0; j < n; j++)
    {
        printf("%d ", a[j]);
    }
}
