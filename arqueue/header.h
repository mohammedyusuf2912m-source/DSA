#ifndef Arq_h
#define Arq_h
#define MAXSIZE 10
void init(int *a,int *front ,int *rear);
void enqueue(int *a,int key,int *rear,int *f);
void dequeue(int *a,int *front,int *rear);
void display(int *a,int front,int rear);
void isempty(int front,int rear);
#endif