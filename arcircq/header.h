#ifndef arcircq_h
#define arcircq_h
#define MAXSIZE 5
void init(int *a,int *front ,int *rear);
void enqueue(int *a,int key,int *rear,int *f);
void dequeue(int *a,int *front,int *rear);
void display(int *a,int front,int rear);
void isempty(int front,int rear);
#endif