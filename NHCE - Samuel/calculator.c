#include <stdio.h>

int main () {
    int a,b,choice;
    printf (" 1.Addition\n 2.Subtraction\n 3.Multiplication\n 4.Division\n");
    printf ("Enter the values of a & b: ");
    scanf ("%d %d",&a,&b);
    printf ("Enter your Choice(1-4) : ");
    scanf ("%d",&choice);
    switch (choice) {
        case 1 :
            printf ("Sum of %d and %d is : %d",a,b,a+b);
            break;
        case 2 :
            printf ("Difference of %d and %d is : %d",a,b,a-b);
            break;
        case 3 :
            printf ("Multiplication of %d and %d is : %d",a,b,a*b);
            break;
        case 4 :
            printf ("Division of Two Numbers is %d : ",a/b);
            break;
        default :
            printf (" Invalid choice.");
            break;
    }
    return 0;
}