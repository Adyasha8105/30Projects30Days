#include <stdio.h>

void callbyvalue(int x, int y)
{
    int temp;
    temp = x;
    x = y;
    y = temp;
}

void callbyreference(int *x, int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

int main()
{
    int a, b;

    printf("Enter the numbers to be swapped: ");
    scanf("%d ,%d", &a, &b);

    callbyvalue(a, b);

    printf("\nCall by value, after swap: ");
    printf("%d ,%d", a, b);

    callbyreference(&a, &b);

    printf("\nCall by reference, after swap: ");
    printf("%d ,%d", a, b);

    return 0;
}
