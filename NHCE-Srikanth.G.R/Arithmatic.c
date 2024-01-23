#include<stdio.h>
void main()
{
    int n,m,operation;
    printf("Enter the operations (1:+,2:-,3:*,4:/)");
    scanf("%d",&operation);
    printf("enter the two numbers");
    scanf("%d%d",&n,&m);
    switch(operation)
    {
        case '1':
        printf("The result is %d",n+m);
        break;
        case '2':
        printf("The result is %d",n-m);
        break;
        case '3':
        printf("The result is %d",n*m);
        break;
        case '4':
        printf("The result is %d",n/m);
        break;
        default:
        printf("Invalid option");
        break;
    }
}
