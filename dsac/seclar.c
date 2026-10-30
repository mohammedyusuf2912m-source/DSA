#include<stdio.h>
#include<limits.h>
int main()
{
    int a[] = {35, 35, 33, 10, 1},n=5;
    int secl=INT_MIN;
    int l=INT_MIN;
    for(int i=0;i<n;i++)
    {
        if(a[i]>l)
        {
            secl=l;
            l=a[i];
        }
            else if(a[i]<l && a[i]>secl)
            {
                secl=a[i];
            }
        }-
    printf("%d",secl);
}