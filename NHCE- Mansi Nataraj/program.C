#include<stdio.h>
void main()
{
    int option,a,b,c;
    printf("enter the value of a");
    scanf("%d",&a);
    printf("enter the value of b");
    scanf("%d",&b);
    printf("1.addition\n2.subtraction\n3.multiplication\n4.division\n5.modulo");
    printf("enter the option");
    scanf("%d",&option);
    switch(option)
    {
        case 1:
        c=a+b;
        printf("sum is %d",c);
        break;
        case 2:
        c=a-b;
        printf("subtraction is %d",c);
        break;
        case 3:
        c=a*b;
        printf("multiplication is %d",c);
        break;
        case 4:
        c=a/b;
        printf("division is %d",c);
        break;
        case 5:
        c=a%b;
        printf("modulo is %d",c);
        break;
        default:
        printf("invlaid option");
        break;
    }
}
