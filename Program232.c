#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

typedef struct Node NODE;
typedef struct Node * PNODE;
typedef struct Node ** PPNODE;

void InsertFirst(PPNODE Head, int No)
{
    PNODE newn = (PNODE)malloc(sizeof(NODE));

    newn->data = No;
    newn->next = NULL;

    if(*Head == NULL)   
    {
        *Head = newn;
    }
    else
    {
        newn -> next = *Head;
        *Head = newn;
    }
}

void Display(PNODE Head)
{
    printf("Contents of Linked List : \n");

    while(Head != NULL)
    {
        printf("| %d | -> ",Head->data);
        Head = Head->next;
    }
    printf("NULL\n");
}

int SumEven(PNODE Head)
{
    int iSum = 0;

    while(Head != NULL)
    {
        if(((Head -> data) % 2) == 0)
        {
            iSum = iSum + (Head -> data);
        }
        Head = Head -> next;
    }
    return iSum;
}

int main()
{
    PNODE First = NULL;
    int iRet = 0;
    InsertFirst(&First, 111);
    InsertFirst(&First, 100);
    InsertFirst(&First, 50);
    InsertFirst(&First, 20);
    InsertFirst(&First, 11);
    
    Display(First);
    iRet = SumEven(First);
    printf("Summation of all even elements is : %d\n",iRet);
    
    return 0;
}