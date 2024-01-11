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

int LastOccurance(PNODE Head, int no)
{
    int iPos = -1;
    int iCnt = 1;

    while(Head != NULL)
    {
        if((Head -> data) == no)
        {
           iPos = iCnt;
        }
        Head = Head -> next;
        iCnt++;
    }

    return iPos;
}

int main()
{
    PNODE First = NULL;
    int iRet = 0;
    InsertFirst(&First, 111);
    InsertFirst(&First, 11);
    InsertFirst(&First, 50);
    InsertFirst(&First, 11);
    InsertFirst(&First, 11);
    InsertFirst(&First, 5);
    InsertFirst(&First, 3);

    Display(First);
    iRet = LastOccurance(First,11);
    printf("LastOccurance is : %d\n",iRet);
    
    return 0;
}