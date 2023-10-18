// Program for Double Ended Queue
// Author: Agamya Samuel
// Date: 6/10/2023
// ID: 22BTCSE042

#include <stdio.h>
#include <stdlib.h>

#define MAX 5
void insert_right();
void insert_left();
void delete_right();
void delete_left();
void display_queue();

int deque_arr[MAX];
int left = -1;
int right = -1;

void insert_right()
{
    int added_item;
    if ((left == 0 && right == MAX - 1) || (left == right + 1))
    {
        printf("Queue Overflow \n");
        return;
    }
    if (left == -1)
    {
        left = 0;
        right = 0;
    }
    else
    {
        if (right == MAX - 1)
            right = 0;
        else
            right = right + 1;
    }
    printf("Input the element for adding in queue : ");
    scanf("%d", &added_item);
    deque_arr[right] = added_item;
    display_queue();
}

void insert_left()
{
    int added_item;
    if ((left == 0 && right == MAX - 1) || (left == right + 1))
    {
        printf("Queue Overflow \n");
        return;
    }
    if (left == -1)
    {
        left = 0;
        right = 0;
    }
    else
    {
        if (left == 0)
            left = MAX - 1;
        else
            left = left - 1;
    }
    printf("Input the element for adding in queue : ");
    scanf("%d", &added_item);
    deque_arr[left] = added_item;
    display_queue();
}

void delete_left()
{
    if (left == -1)
    {
        printf("Queue Underflow \n");
        return;
    }
    printf("Element deleted from queue is : %d\n", deque_arr[left]);
    if (left == right)
    {
        left = -1;
        right = -1;
    }
    else
    {
        if (left == MAX - 1)
            left = 0;
        else
            left = left + 1;
    }
    display_queue();
}

void delete_right()
{
    if (left == -1)
    {
        printf("Queue Underflow \n");
        return;
    }
    printf("Element deleted from queue is : %d\n", deque_arr[right]);
    if (left == right)
    {
        left = -1;
        right = -1;
    }
    else
    {
        if (right == 0)
            right = MAX - 1;
        else
            right = right - 1;
    }
    display_queue();
}

void display_queue()
{
    int front_pos = left, rear_pos = right;
    if (left == -1)
    {
        printf("Queue is empty \n");
        return;
    }
    printf("Queue elements :\n");
    if (front_pos <= rear_pos)
        while (front_pos <= rear_pos)
        {
            printf("%d ", deque_arr[front_pos]);
            front_pos++;
        }
    else
    {
        while (front_pos <= MAX - 1)
        {
            printf("%d ", deque_arr[front_pos]);
            front_pos++;
        }
        front_pos = 0;
        while (front_pos <= rear_pos)
        {
            printf("%d ", deque_arr[front_pos]);
            front_pos++;
        }
    }
    printf("\n");
}

int main()
{
    int choice;
    do
    {
        printf("1.Insert at right\n");
        printf("2.Insert at left\n");
        printf("3.Delete from left\n");
        printf("4.Delete from right\n");
        printf("5.Display\n");
        printf("6.Quit\n");
        printf("Enter your choice : ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            insert_right();
            break;
        case 2:
            insert_left();
            break;
        case 3:
            delete_left();
            break;
        case 4:
            delete_right();
            break;
        case 5:
            display_queue();
            break;
        case 6:
            break;
        default:
            printf("Wrong choice\n");
        }
    } while (choice != 6);
    return 0;
}