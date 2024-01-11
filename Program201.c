#include<stdio.h>
#include<stdlib.h>

struct node 
{
    int data;
    struct node *next;
    struct node *prev;
};

typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;

int main()
{
    PNODE first = NULL;
    PNODE last = NULL;
    
    return 0;
}
