#include<stdio.h>
#include<stdlib.h>
#include"header.h"

void insertionatend(int key,list_t *l)
{
node_t *newnode=malloc(sizeof(node_t));
newnode->data=key;
newnode->next=l->head;
if(l->tail==NULL)
{
    l->head=l->tail=newnode;
    return;
}
else{
l->tail->next=newnode;
l->tail=newnode;
}return;}

void insertionatbeg(int key,list_t *l)
{
    node_t *newnode = malloc(sizeof(node_t));
    newnode->data = key;
    newnode->next = l->head;
    l->head = newnode;
    if(l->tail==NULL)
    {
        l->tail=newnode;
    }
    l->tail->next=newnode;
}

void deletionatbeg(list_t *l)
{
if(l->head==NULL)
{
    printf("list is empty");
    return;
}
else if(l->head==l->tail)
{
    free(l->head);
    l->head=l->tail=NULL;
    return;
}
node_t *temp=l->head;
l->tail->next=l->head=temp->next;
free(temp);
return;
}

void deletionatend(list_t *l)
{
if(l->head==NULL){
    printf("List is empty");
    return;}

if(l->head==l->tail)
{
    free(l->head);
    l->tail=l->head=NULL;
    return;
}
node_t *p=l->head;
while(p->next!=l->tail)
{
p=p->next;
}
l->tail=p;
free(p->next);
l->tail->next=l->head;
}
void display(list_t *l)
{
    if(l->head==NULL){
        printf("LIST IS EMPTY");
        return;
    }
        node_t *temp=l->head;
        printf("->");
        do{
            printf("%d->",temp->data);
            temp=temp->next;
        }while(temp!=l->head);

    }





