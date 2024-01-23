#include<stdio.h>
void main()
{
 int n,temp,rev=0;
 printf("Enter n");
 scanf("%d",&n);
 while(n>0)
  {
     temp=n%10;
     rev=rev*10+temp;
     n=n/10;
  }
 printf("reverse of n is: %d",rev);
}