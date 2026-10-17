#include<stdio.h>
#include<stdlib.h>
#include"header.h"

void insertionatend(int key,list_t *l)
{
node_t *newnode=malloc(sizeof(node_t));
newnode->data=key;
newnode->next=NULL;
if(l->head==NULL)
{
    l->head=newnode;
    return;
}
else{
node_t *p=l->head;
while(p->next)
{
p=p->next;
}
p->next=newnode;
}return;}

void insertionatbeg(int key,list_t *l)
{
    node_t *newnode = malloc(sizeof(node_t));

    newnode->data = key;
    newnode->next = l->head;

    l->head = newnode;
}

void deletionatbeg(list_t *l)
{
if(l->head==NULL)
{
    printf("list is empty");
    return;
}
else if(l->head->next==NULL)
{
    free(l->head);
    l->head=NULL;
    return;
}
node_t *temp=l->head;
l->head=temp->next;
free(temp);
return;
}

void deletionatend(list_t *l)
{
if(l->head==NULL){
    printf("List is empty");
    return;}
node_t *p=l->head;
if(p->next==NULL)
{
    free(l->head);
    l->head=NULL;
    return;
}

while(p->next->next)
{
    p=p->next;
}

free(p->next);
p->next=NULL;
}
void display(list_t *l)
{
    if(l->head==NULL){
        printf("LIST IS EMPTY");
        return;
    }
        node_t *temp=l->head;
        while(temp){
            printf("%d->",temp->data);
            temp=temp->next;
        }
        printf("NULL\n");
    }





