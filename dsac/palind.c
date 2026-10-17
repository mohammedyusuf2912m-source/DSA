#include<stdio.h>
#include<string.h>
int main()
{
char s[10];
printf("Enter string");
scanf("%s",&s);
int n=strlen(s);
for(int i=0;i<n/2;i++)
{
    if(s[i]==s[n-1-i])
    {}
    else
    {
        printf("\nnot a palindrome");
        return 0;
    }
}
printf("\nPalindrome");
return 0;
}