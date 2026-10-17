#include<stdio.h>
#include"header.h"
void push(char key,char *a,int *top)
{
    if(*top==MAXSIZE-1)
    {
        printf("overflow");
        return;
    }
    else
    {
    (*top)++;
    a[*top]=key;
}}
char pop(char *a,int *top)
{
  if(*top<=-1){
  printf("\nunderflow");
  return '\0';
  }
  else{
  char k=a[*top];
  (*top)--;
  return k;
}}
void peek(char *a,int top)
{
        if (top == -1)
    {
        printf("Stack is empty");
        return;
    }
    printf("%c",a[top]);
}
void display(char *a,int top)
{
  if(top==-1){
    printf("\nStack is empty");
    return;}
  else{
    for(int i=0;i<=top;i++)
    {
        printf("%c ",a[i]);
    }
}}