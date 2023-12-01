#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
    struct node *prev;      // #
};

typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;

void InsertFirst(PPNODE Head, int no)
{
    PNODE newn = NULL;

    newn = (PNODE)malloc(sizeof(NODE));

    newn->data = no;
    newn->next = NULL;
    newn->prev = NULL;      // #

    if(*Head == NULL)   // LL is empty
    {
        *Head = newn;
    }
    else
    {
        newn->next = *Head;
        (*Head)->prev = newn;       // #
        *Head = newn;
    }
}

void InsertLast(PPNODE Head, int no)
{
    PNODE newn = NULL;
    PNODE temp = *Head;

    newn = (PNODE)malloc(sizeof(NODE));

    newn->data = no;
    newn->next = NULL;
    newn->prev = NULL;      // #

    if(*Head == NULL)   // LL is empty
    {
        *Head = newn;
    }
    else
    {
        // type 2
        while(temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = newn;
        newn->prev = temp;      // #
    }
}

void DeleteFirst(PPNODE Head)
{
    if(*Head == NULL)   // empty LL
    {
        return;
    }
    else if(((*Head) -> next == NULL) && ((*Head) -> prev == NULL)) // Single node
    {                                                               // #    
        free(*Head);
        *Head = NULL;
    }
    else
    {
        *Head = (*Head) -> next;
        free((*Head)->prev);
        (*Head)->prev = NULL;
    }
}

void DeleteLast(PPNODE Head)
{
    PNODE temp = *Head;

    if(*Head == NULL)   // empty LL
    {
        return;
    }
    else if(((*Head) -> next == NULL) && ((*Head) -> prev == NULL)) // Single node
    {                                                               // #    
        free(*Head);
        *Head = NULL;
    }
    else
    {
        while(temp->next->next != NULL)
        {
            temp = temp -> next;
        }
        free(temp->next);
        temp->next = NULL;
    }
}

void Display(PNODE Head)
{   
    printf("Contents of LinkedList are : \n");

    printf("NULL <=> ");
    while(Head != NULL)
    {
		printf("| %d | <=> ",Head->data);
		Head = Head -> next;
    }
    printf("NULL\n");
}

int Count(PNODE Head)
{
    int iCnt = 0;
    while(Head != NULL)
    {
        iCnt++;
		Head = Head -> next;
    }
    return iCnt;
}

void DeleteAtPos(PPNODE Head,int ipos)
{
    int size = 0, i = 0;
    size = Count(*Head);
    PNODE temp = *Head;

    if((ipos < 1) || (ipos > (size)))
    {
        printf("Invalid position\n");
        return;
    }
    
    if(ipos == 1)
    {
        DeleteFirst(Head);
    }
    else if(ipos == size)
    {   
        DeleteLast(Head);
    }
    else
    {
        for(i = 1; i < ipos -1; i++)
        {
            temp = temp->next;
        }

        temp->next = temp->next->next;
        free(temp->next->prev);     // #
        temp->next->prev = temp;    // #
    }
}

void InsertAtPos(PPNODE Head, int no, int ipos)
{
    int size = 0, i = 0;
    size = Count(*Head);
    PNODE newn = NULL;
    PNODE temp = *Head;

    if((ipos < 1) || (ipos > (size+1)))
    {
        printf("Invalid position\n");
        return;
    }
    
    if(ipos == 1)
    {
        InsertFirst(Head, no);
    }
    else if(ipos == size+1)
    {   
        InsertLast(Head, no);
    }
    else
    {
        newn = (PNODE)malloc(sizeof(NODE));
        newn->data = no;
        newn->next = NULL;
        newn->prev = NULL;      // #

        for(i = 1; i < ipos-1; i++)
        {
            temp = temp->next;
        }

        newn->next = temp->next;
        temp->next->prev = newn;        // #
        temp->next = newn;
        newn->prev = temp;      // #
    }
}

int main()
{
    PNODE First = NULL;
    int iRet = 0;

    InsertFirst(&First,51);
    InsertFirst(&First,21);
    InsertFirst(&First,11);
    Display(First);
    iRet = Count(First);
    printf("Number of elements are : %d\n",iRet);

    InsertLast(&First,101);
    InsertLast(&First,111);
    InsertLast(&First,121);
    Display(First);
    iRet = Count(First);
    printf("Number of elements are : %d\n",iRet);

    InsertAtPos(&First, 105, 5);
    Display(First);
    iRet = Count(First);
    printf("Number of elements are : %d\n",iRet);

    DeleteAtPos(&First,5);
    Display(First);
    iRet = Count(First);
    printf("Number of elements are : %d\n",iRet);

    DeleteFirst(&First);
    Display(First);
    iRet = Count(First);
    printf("Number of elements are : %d\n",iRet);

    DeleteLast(&First);
    Display(First);
    iRet = Count(First);
    printf("Number of elements are : %d\n",iRet);

    return 0;
}