#include<stdio.h>
#include"header.h"
int main()
{
    char a[10],key;
    int top=-1;
    push('a',a,&top);
    push('b',a,&top);
    push('c',a,&top);
    push('d',a,&top);
    push('e',a,&top);
    display(a,top);
    for(int i=0;i<top/2;i++)
    {
        key=a[top-i];
        a[top-i]=a[i];
        a[i]=key;
    }
    printf("\n");
    display(a,top);
}