#include<stdio.h>
#include<stdlib.h>
#define MAX 5
int stack_arr[MAX];
int top=-1;
int pushed_item;
//Push the element
void push()
{
    if (top==MAX-1)
    {
        printf("Stack is overflow");
    }

    else
    {
        for (int i=0;i<MAX;i++)
        {
            printf("Enter the element:");
            scanf("%d",&pushed_item);
            top=top+1;
            stack_arr[top]=pushed_item;
        }        
    }
}
void disp()
{
    if (top==-1)
    {
        printf("stack is empty");
    }

    else
    {
        printf("Elements are: ");
        for(int i=0;i<=top;i++)
        {
            printf("%d,",stack_arr[i]);
        }
    }
}
void pop()
{
    if (top==-1)
    {
        printf("Stack is underflow.");
    }
    else
    {
        printf("deleted elements is %d ",stack_arr[top]);
        top=top-1;
    }
    
}
void main()
{
    int ch;
    while (1)
    {
        printf("Enter the choice:  \n1:push ,  \n2:pop , \n3:disp , \n4:exit  \n");
        scanf("%d",&ch);
        switch (ch)
        {
        case 1:
            push();
            break;
        case 2:
            pop();
            break;
        case 3:
            disp();
            break;
        case 4:
            exit(0);
            break;
        default:
            break;
        }
    }
    
}