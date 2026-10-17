#ifndef llist_h
#define llist_h
 struct node{
    int data;
    struct node* next;
}typedef node_t;
struct list{
    node_t *head;
}typedef list_t;
void insertionatend(int key,list_t *l);
void deletionatend(list_t *l);
void insertionatbeg(int key,list_t *l);
void deletionatbeg(list_t *l);
void isempty(list_t *l);
void display(list_t *l);
#endif