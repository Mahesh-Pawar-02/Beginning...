// Doubly Circular
#include<iostream>
using namespace std;

typedef struct node
{
    int data;
    struct node *next;
    struct node *prev;
}NODE, *PNODE;

class DoublyCL
{
    private:
        PNODE first;
        PNODE last;
        int Count;

    public:
        DoublyCL();
        void InsertFirst(int no);
        void InsertLast(int no);
        void Display();
        int CountNode();
        void DeleteFirst();
        void DeleteLast();
        void InsertAtPos(int no,int ipos);
        void DeleteAtPos(int ipos);
};

DoublyCL::DoublyCL()
{
    first = NULL;
    last = NULL;
    Count = 0;
}

void DoublyCL::InsertFirst(int no){}
void DoublyCL::InsertLast(int no){}
void DoublyCL::Display(){}
int DoublyCL::CountNode()
{
    return Count;
}
void DoublyCL::DeleteFirst(){}
void DoublyCL::DeleteLast(){}
void DoublyCL::InsertAtPos(int no,int ipos){}
void DoublyCL::DeleteAtPos(int ipos){}

int main()
{
    return 0;
}