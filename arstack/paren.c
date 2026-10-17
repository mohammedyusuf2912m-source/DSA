#include<stdio.h>
#include<string.h>
#include"header.h"
int main()
{
    char s[10],a[10];
    int top=-1;
    printf("Enter the '()'-parenthesis string");
    scanf("%9s",s);
    int n=strlen(s);
    for(int i=0;i<n;i++)
    {
        if(s[i]=='(')
        {
            push('(',a,&top);
        }
        else if(s[i]==')')
        {
            if(top==-1)
            {
                printf("invalid sequence");
                return 0;
            }
            pop(a,&top);
        }

    }
    if(top==-1)
    {printf("Valid sequence");
    return 0;}
    else
    printf("invalid sequence");
    return 0;
}