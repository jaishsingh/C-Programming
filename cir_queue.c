#include <stdio.h>
#include <stdlib.h>
#define MAX 5
int queue_arr[MAX];
int rear = -1;
int front = -1;
int jaish;

void insert();
void delete();
void display();

void insert()
{
    if ((front == 0 && rear == (MAX - 1)) || (front == rear + 1))
    {
        printf("\nCirclar Queue is full.\n");
        return;
    }
    else
    {
        if (front == -1)
            front = 0;
        if (rear == (MAX - 1))
            rear = 0;
        else 
        rear = rear + 1;       
        printf("\nEnter the element: ");
        scanf("%d",&jaish);        
        queue_arr[rear] = jaish;
        
    }
}

void delete()
{
    if (front == -1)
    {
        printf("\nQueue is empty.\n");
        return;
    }
    else
    {
        jaish = queue_arr[front];
        printf("Deleted elements is %d", jaish);

        if (front == rear)
        {
            front = -1;

            rear = -1;
        }
        if (front == (MAX - 1))
        {
            front = 0;
        }
        else
        {
            front = front + 1;
        }
    }
}
void display()
{
    if (front == -1)
    {
        printf("\nQueue is empty.\n");
        return;
    }
    else
    {
        int i;
        printf("\nElement in queue:\n");
        for (i = front; i != rear; i = (i + 1) % MAX)
        {
            printf(" %d", queue_arr[i]);
        }
        printf(" %d,", queue_arr[i]);
    }
}
int main()
{
    int ch;
    while (1)
    {
        printf("\n1:insert\n2:delete\n3:display\n4:exit\n");
        printf("Enter the choice: ");
        scanf("%d", &ch);
        switch (ch)
        {
            case 1:
            {
                insert();
                break;
            }
            case 2:
            {
                delete ();
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
                printf("invalid choice!\n");

        }
    }
}
