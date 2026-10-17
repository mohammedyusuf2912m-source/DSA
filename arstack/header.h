#ifndef arstck_h
#define arstck_h
#define MAXSIZE 5
void init();
void push(char key,char *a,int *t);
char pop(char *a,int *t);
void display(char *a,int t);
void peek(char *a,int t);
#endif