#ifndef stack_c
#define stack_c
struct node
{
  int data;
  struct node *next; 
}typedef node_t;
struct stack
{
    node_t *head;
}typedef stack_t;
void push(int key,stack_t *st,int *top);
int pop(stack_t *st,int *top);
void peek(stack_t *st,int top);
void display(stack_t *st);
#endif