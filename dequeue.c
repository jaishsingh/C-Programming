#include<stdio.h>
#include<stdlib.h>
#define MAX 5
int dq[MAX];
int basket;

int right=-1;
int left=-1;


void insert_right()
{
    if((left==0 && right==(MAX-1))||(left==right+1))
    {
        printf("dequeue is full.");
        return;
    }
    else if (left==-1 && right==-1)
    {
        right=0;
        left=0;
        printf("Enter the element:");
        scanf("%d",&basket);
        dq[right]=basket;
    }
    else if (right==MAX-1)
    {
        right=0;
        printf("Enter the element:");
        scanf("%d",&basket);
        dq[right]=basket;
    }
    else
    {
        right=right+1;
        printf("Enter the element:");
        scanf("%d",&basket);
        dq[right]=basket;
    }
}

void insert_left()
{
    if((left==0 && right==(MAX-1))||(left==right+1))
    {
        printf("dequeue is full.");
        return;
    }
    else if (left==-1 && right==-1)
    {
        left=0;
        right=0;
        printf("Enter the element:");
        scanf("%d",&basket);
        dq[left]=basket;
    }
    else if (left==0)
    {
        left=MAX-1;
        printf("Enter the element:");
        scanf("%d",&basket);
        dq[left]=basket;
    }
    else
    {
        left=left-1;
        printf("Enter the element:");
        scanf("%d",&basket);
        dq[left]=basket;
    }
}

void delete_left()
{
    if(left==-1 &&right==-1)
    {
        printf("dq is empty.");
        return;
    }
    else if(left==right)
    {
        left=-1;
        right=-1;
    }
    else if (left==MAX-1)

    {
        printf("deleted element is %d",dq[left]);
        left=0;
    }
    else
    {
        printf("deleted element is %d",dq[left]);
        left=left+1;
    }
}

void delete_right()
{
    if (left==-1 && right==-1)
    {
        printf("dq is empty.");
        return;
    }
    else if(left==right)
    {
        left=-1;
        right=-1;
    }
    else if (right==0)
    {
        printf("deleted element is %d",dq[right]);
        right=MAX-1;
    }
    else
    {
        printf("deleted element is %d",dq[right]);
        right=right-1;
    }
}
void display()
{
    if (left==-1 && right==-1)
    {
        printf("dq is empty.");
        return;
    }
    else
    {
        int i;
        printf("Elements are:");
        for (i=left;i!=right;i=(i+1)%MAX)
        {
            printf("%d",dq[i]);
        }
        printf("%d",dq[i]);
        
    }
}
int main()
{
    int ch;
    while(1)
    {
        printf("\n1:insert-right\n2:insert-left\n3:delete-left\n4:delete-right\n5:display\n");
        printf("Enter the choice");
        scanf("%d",&ch);
        switch (ch)
        {
            case 1:
            {
                insert_right();
                break;
            }
            case 2:
            {
                insert_left();
                break;
            }
            case 3:
            {
                delete_left();
                break;
            }
            case 4:
            {
                delete_right(0);
                break;
            }
            case 5:
            {
                display();
                break;
            }
            case 6:
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