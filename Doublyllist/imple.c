#include<stdio.h>
#include<stdlib.h>
#include"header.h"

void insertionatend(int key,list_t *l)
{
node_t *newnode=malloc(sizeof(node_t));
newnode->data=key;
newnode->next=NULL;
newnode->prev=NULL;
if(l->head==NULL&&l->tail==NULL)
{
    l->head=l->tail=newnode;
    return;
}
node_t *p=l->tail;
l->tail=newnode;
p->next=newnode;
newnode->prev=p;
return;
}

void deletionatend(list_t *l)
{
if(l->head==NULL&&l->tail==NULL){
    printf("List is empty");
    return;}
node_t *p=l->tail;
if(p->prev==NULL)
{
    free(l->head);
    l->head=NULL;
    l->tail=NULL;
    return;
}
l->tail=l->tail->prev;
l->tail->next=NULL;
free(p);
}

void insertionatbeg(int key,list_t *l)
{
node_t *newnode=malloc(sizeof(node_t));
newnode->data=key;
newnode->prev=NULL;
if(l->head==NULL){
    l->head=newnode;
    l->tail=newnode;
    newnode->next=NULL;
    return;
}
newnode->next=l->head;
l->head=newnode;
}

void deletionatbeg(list_t *l){
if(l->head==NULL&&l->tail==NULL)
{
    printf("list is empty");
    return;
}
node_t *temp=l->head;
l->head=l->head->next;
free(temp);
if(l->head==NULL)
    l->tail=NULL;
else
    l->head->prev=NULL;
}
void display(list_t *l)
{
    if(l->head==NULL&&l->tail==NULL){
        printf("LIST IS EMPTY");
        return;
    }
        node_t *temp=l->head;
        while(temp){
            printf("%d<=>",temp->data);
            temp=temp->next;
        }
        printf("NULL\n");
    }





