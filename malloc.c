#include<stdio.h>
#include<stdlib.h>
void main()
{
    int*ptr;
    int i;
    ptr=(int*)malloc(4*sizeof(int));
    for ( i=0; i<4; i++)
    {
        printf("\nEnter the %d value:",i+1);
        scanf("%d",&ptr[i]);
    }
    for ( i=0; i<4; i++)
    {
        printf("%d value of array is %d.\n",i+1,ptr[i]);
    }
    return 0;
    
}