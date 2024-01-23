#include <stdio.h>
int add(int a, int b)
{
    return a + b;
}
void main()
{
    int num1, num2;
    printf("Enter num1: ");
    scanf("%d", &num1);
    printf("Enter num2: ");
    scanf("%d", &num2);
    printf("%d + %d = %d", num1, num2, add(num1, num2));
}