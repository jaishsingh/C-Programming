#include<stdio.h>
#include<stdlib.h>
#define MAX 5
int queue[MAX];
int rear=-1;
int front=-1;
int basket;

void insert()
{
    
    if (rear==(MAX-1))
    { 
        printf("\nQueue is full.\n");
        return;
    }
    else
    { if (front==-1)
    
        front=0;
        
        for(int i=0;i<MAX;i++)
        {
            printf("\nEnter the element:");
            scanf("%d",&basket);
            rear=rear+1;
            queue[rear]=basket;
        }
    }
    
}
void del()
{
    if (front==-1 || front>rear)
    {
        printf("\nQueue is empty.\n");
        front=-1;
        rear=-1;
        return;
    }
    basket=queue[front];
    front=front+1;
    printf("\nDeleted element is %d\n",basket);
    
}
void display()
{
   
    if (front== -1 || front > rear)
    {
        printf("\nQueue is empty.");
        front=-1;
        rear=-1;
        return;
    }
    printf("Elements are:");
    for (int i=front; i<=rear; i++)
    {
        printf("\n%d",queue[i]);

    }
}
    
void main()
{
    int ch;
    while(1)
    {

        printf("\nEnter the choice:  \n1:insert\n2:delete\n3:display\n4:exit\n");
        scanf("%d",&ch);
        switch(ch)
        {
        case 1:
        {
            insert();
            break;
        }
        case 2:
        {
            del();
            break;
        }
        case 3:
        {
            display();
            break;
        }
        case 4:
        {                  
            exit(0);
            break;
        }
        default:
        {
            printf("\nInvalid choice\n");
        }
            
        }

    }    

}