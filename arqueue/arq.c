#include<stdio.h>
#include"header.h"
int main()
{

    int a[MAXSIZE];
    int r,f,key;
    init(a,&f,&r);
    char ch;
    while(1){
    printf("\nEnter choice: \n1-Enqueue\n2-Dequeue\n3-Display\n4-Isempty");
    scanf(" %c",&ch);
    switch(ch)
    {
        case '1':
            printf("Enter value");
            scanf("%d",&key);
            enqueue(a,key,&f,&r);
            break;
        case '2':
            dequeue(a,&f,&r);
            break;
        case '3':
            display(a,f,r);
            break;
        case '4':
            isempty(f,r);
            break;
        case '0':
            return 0;
        default:
            printf("Invalid choice");
            break;
    }
}}