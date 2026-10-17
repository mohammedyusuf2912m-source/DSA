#include<stdio.h>
#include<stdlib.h>
#include"header.h"
int main()
{
  
    int a[5]={1,2,3,4,5},top=-1;
    stack_t *s=malloc(sizeof(stack_t));
    s->head=NULL;
    for(int i=0;i<5;i++)
    {
    push(a[i],s,&top);
    }

    for(int i=0;i<5;i++)
    {
    a[i]=pop(s,&top);
    }

    for(int i=0;i<5;i++)
    {
        printf("%d ",a[i]);
    }   
}