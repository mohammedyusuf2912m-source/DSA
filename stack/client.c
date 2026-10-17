#include<stdio.h>
#include"header.h"
int main()
{
    char ch;
    int key,top=-1;
    stack_t *st;
    while(1){
    printf("\nEnter choice\n0.Exit\n1.push\n2.pop\n3.display\n4.peek");
    scanf(" %c",&ch);
    switch(ch)
    {
        case '0':
            return 0;
        case '1':
            printf("Enter value");
            scanf("%d",&key);
            push(key,st,&top);
            break;  
        case '2':
            pop(st,&top);
            break;
        case '4':
            peek(st,top);
            break;
        case '3':
            display(st);
            break;
        default:
            printf("invalid choice");
    }
}}