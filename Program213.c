#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;

//void InsertFirst(PPNODE Head, int no)
void Push(PPNODE Head, int no)
{
    PNODE newn = NULL;

    newn = (PNODE)malloc(sizeof(NODE));
    newn->data = no;
    newn->next = NULL;

    if(*Head == NULL)
    {
        *Head = newn;
    }
    else
    {
        newn->next = *Head;
        *Head = newn;
    }
}

//void DeleteFirst(PPNODE Head)
int Pop(PPNODE Head)
{
    return 0;
}

void Display(PNODE Head)
{
    printf("Elements of stack are : \n");

    while(Head != NULL)
    {
        printf("| %d |\n",Head->data);
        Head = Head->next;
    }
}

int main()
{
    PNODE first = NULL;

    Push(&first, 101);
    Push(&first, 51);
    Push(&first, 21);
    Push(&first, 11);

    Display(first);
    
    return 0;
}