// Doubly Linear
#include<iostream>
using namespace std;

typedef struct node
{
    int data;
    struct node *next;
    struct node *prev;
}NODE, *PNODE;

class DoublyLL
{
    private:
        PNODE first;
        int Count;

    public:
        DoublyLL();
        void InsertFirst(int no);
        void InsertLast(int no);
        void Display();
        int CountNode();
        void DeleteFirst();
        void DeleteLast();
        void InsertAtPos(int no,int ipos);
        void DeleteAtPos(int ipos);
};

DoublyLL::DoublyLL()
{
    first = NULL;
    Count = 0;
}

void DoublyLL::InsertFirst(int no){}
void DoublyLL::InsertLast(int no){}
void DoublyLL::Display(){}
int DoublyLL::CountNode()
{
    return Count;
}
void DoublyLL::DeleteFirst(){}
void DoublyLL::DeleteLast(){}
void DoublyLL::InsertAtPos(int no,int ipos){}
void DoublyLL::DeleteAtPos(int ipos){}

int main()
{
    return 0;
}