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
    if ((*r+1)%MAXSIZE==*f)
{
    printf("Queue is full");
    return;
}
    if(*f==-1)
    {
    (*f)++;
    }
    *r=(*r+1)%MAXSIZE;
    a[*r]=key;
}
void dequeue(int *a,int *f,int *r)
{
    if(*f == -1 && *r == -1)
    {
        printf("Empty queue");
    return;
    }
    printf("\n%d",a[*f]);
    if(*f==*r)
    {
        *f=*r=-1;
        return;
    }
    *f=(*f+1)%MAXSIZE;
}
void display(int *a,int f,int r)
{
    if(f == -1 && r == -1)
    {
        printf("Empty queue");
        return;
    }
    int i=f;
    do{
    printf("%d ",a[i]);
    i=(i+1)%MAXSIZE;
    }while(i!=(r+1)%MAXSIZE);
}
void isempty(int f,int r)
{
    if(r==-1&&f==-1)
    {printf("True");
    return;}
    printf("False");
}