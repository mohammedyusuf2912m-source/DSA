#include<stdio.h>
#include"header.h"
int main()
{
    char a[10],reva[10],key;
    int top=-1,top1=-1;
    push('a',a,&top);
    push('b',a,&top);
    push('c',a,&top);
    push('d',a,&top);
    push('e',a,&top);
    display(a,top);
    while(top>=0)
    {
        push(pop(a,&top),reva,&top1);
    }
    printf("\n");
    display(reva,top1);
}