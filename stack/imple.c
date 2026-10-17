#include<stdio.h>
#include"header.h"
#include<stdlib.h>
void push(int key,stack_t *s,int *top)
{
    node_t *newnode=malloc(sizeof(node_t));
    newnode->data=key;
    newnode->next=s->head;
    s->head=newnode;
    (*top)++;
}
int pop(stack_t *s,int *top)
{
    if(*top==-1)
    {printf("Underflow");
    return 0;}
    node_t *p=s->head;
    int key=p->data;
    s->head=s->head->next;
    free(p);
    (*top)--;
    return key;
}
void peek(stack_t *s,int top)
{
    if(top==-1)
    {printf("Empty stack");
    return;}
    printf("%d",s->head->data);
}
void display(stack_t *s)
{
    if(!s->head)
    {printf("Empty stack");
    return;}
    node_t *p=s->head;
    while(p)
    {
       printf("%d->",p->data);
       p=p->next;
    }
    printf("NULL");
}