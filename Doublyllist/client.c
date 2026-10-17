#include<stdio.h>
#include<stdlib.h>
#include"header.h"
int main()
{
char x;
int key;
list_t *l;
l=malloc(sizeof(list_t));
l->head=l->tail=NULL;
do{
printf("Enter choice\n 0.exit \n 1.insertionatend \n 2.deletionatend \n 3.isempty\n 4.display \n 5.insertionatbeg \n 6.deletionatbeg\n");
scanf(" %c",&x);
switch(x)
{
case '0':
    return 0;
case '1':
    printf("Enter the value");
    scanf("%d",&key);
    insertionatend(key,l);
    break;
case '2':
    deletionatend(l);
    break;
case '3':
    if(l->head==NULL)
    printf("LIST IS EMPTY");
    else
    printf("LIST IS NOT EMPTY");
    break;
case '4':
    display(l);
    break;
case '5':
    printf("Enter the value");
    scanf("%d",&key);
    insertionatbeg(key,l);
    break;
case '6':
    deletionatbeg(l);
    break;
default:
    printf("invalid choice");
    break;
}
}while(1);
}