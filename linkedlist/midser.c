#include <stdio.h>
#include<stdlib.h>
#include "header.h"
int main()
{
    list_t *l=malloc(sizeof(list_t));
    l->head=NULL;
    int c=0;
    insertionatend(10,l);
    insertionatend(20,l);
    insertionatend(30,l);
    insertionatend(40,l);
    insertionatend(50,l);
    node_t *p=l->head;
    while(p)
    {
        p=p->next;
        c++;
    }   
    p=l->head;
    for(int i=0;i<c/2;i++)
    {
        p=p->next;
    }
    printf("%d",p->data);
}