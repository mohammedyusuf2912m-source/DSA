#include<stdio.h>
#include"header.h"
void init(int *a,int *f,int *r)
{
    *r=*f=-1;
    for(int i=0;i<MAXSIZE;i++)
    {
        a[i]=0;
    }
}
void enqueue(int *a,int key,int *f,int *r)
{
    if (*r == MAXSIZE - 1)
{
    printf("Queue is full");
    return;
}
    if(*f==-1)
    {(*f)++;}
    (*r)++;
    a[*r]=key;
}
void dequeue(int *a,int *f,int *r)
{
    if(*f == -1 && *r == -1)
    {printf("Empty queue");
    return;}
    printf("\n%d",a[*f]);
    if(*f==*r)
    {*f=*r=-1;
    return;}
    (*f)++;
}
void display(int *a,int f,int r)
{
    if(f == -1 && r == -1)
    {printf("Empty queue");
        return;}
    for(int i=f;i<=r;i++){
    printf("%d ",a[i]);
    }
}
void isempty(int f,int r)
{
    if(r==-1&&f==-1)
    {printf("True");
    return;}
    printf("False");
}