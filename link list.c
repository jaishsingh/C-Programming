#include<stdio.h>
#include<stdlib.h>
//intialising node
struct node {
    int data;
    struct node *link;
};
//print function
void printlinkedkist(struct node *p)
{
    while(p!=NULL)
    {
        printf("\t%d",p->data);
        p=p->link;
    }
}
//creating node
void main()
{
    int a,b,c;
    int i;
    for (i=0;i<=3;i++)
    {
        printf("Enter the value: ");
        scanf("%d%d%d",&a,&b,&c);
    }
struct node *head;
struct node *one = NULL;
struct node *two = NULL;
struct node *three = NULL;
//giving storage
one = malloc(sizeof(struct node));
two = malloc(sizeof(struct node));
three = malloc(sizeof(struct node));

//initialising value
one->data=a;
two->data = b;
three->data=c;
//link
one->link=two;
two->link=three;
three->link=NULL;
//print
head=one;
printlinkedkist(head);
}
