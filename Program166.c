#include<stdio.h>
#include<stdlib.h>

// Structure Declaration
struct node
{
    int data;           // 4 bytes
    struct node *next;  // 8 bytes
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

int main()
{
    PNODE First = NULL;


    return 0;
}