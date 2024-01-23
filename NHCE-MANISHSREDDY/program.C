#include<stdio.h>
#include<stdlib.h>
    void enqueue();
    void dequeue();
    void display();
    int queue[20],front=-1,rear=-1,n,option=0;
    void main()
    {
    printf("enter the size of queue");
    scanf("%d",&n);
    while(option!=4)
    {
    printf("enter the option");
    scanf("%d",&option);
    switch(option)
    {
    case 1:enqueue();break;
    case 2:dequeue();break;
    case 3:display();break;
    case 4:exit(0);
    default:printf("invalid option");
    }
    }
    }
    void enqueue()
    {
    int element;
    if(rear==n-1)
    printf("overflows");
    else
    {
    if(front==-1)
    front=0;
    printf("enter the element");
    scanf("%d",&element);
    rear++;
    queue[rear]=element;
    }
    }
    void dequeue()
    {
    if(front==-1)
    printf("underflows");
    else
    {
    printf("deleted element %d",queue[front]);
    if(front==rear)
    {
    rear =-1;
    front=-1;
    }
    else
    front++;
    }
    }
    void display()
    {
    if(front==-1)
    printf("underflows");
    else
    {
    int i;
    for(i=front;i<=rear;i++)
    printf(" %d",queue[i]);
    }

    }
