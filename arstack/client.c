#include<stdio.h>
#include"header.h"
int main()
{
char ch;
int key,top=-1,a[MAXSIZE];
while(1){
printf("\nEnter choice \n0.gtfo\n1.Push\n2.Pop\n3.Display\n4.Peek");
scanf(" %c",&ch);
switch(ch)
{
    case '1':
        printf("\nEnter value");
        scanf("%d",&key);
        push(key,a,&top);
        break;
    case '2':
        pop(a,&top);
        break;
    case '3':
        display(a,top);
        break;
    case '4':
        peek(a,top);
        break;
    case '0':
        return 0;
    default:
        printf("Invalid choice");
}
}
}