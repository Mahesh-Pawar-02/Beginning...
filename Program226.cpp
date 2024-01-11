// Singly Circular
#include<iostream>
using namespace std;

typedef struct node
{
    int data;
    struct node *next;
}NODE, *PNODE;

class SinglyCL
{
    private:
        PNODE first;
        PNODE last;
        int Count;

    public:
        SinglyCL();
        void InsertFirst(int no);
        void InsertLast(int no);
        void Display();
        int CountNode();
        void DeleteFirst();
        void DeleteLast();
        void InsertAtPos(int no,int ipos);
        void DeleteAtPos(int ipos);
};

SinglyCL::SinglyCL()
{
    first = NULL;
    last = NULL;
    Count = 0;
}

void SinglyCL::InsertFirst(int no){}
void SinglyCL::InsertLast(int no){}
void SinglyCL::Display(){}
int SinglyCL::CountNode()
{
    return Count;
}
void SinglyCL::DeleteFirst(){}
void SinglyCL::DeleteLast(){}
void SinglyCL::InsertAtPos(int no,int ipos){}
void SinglyCL::DeleteAtPos(int ipos){}

int main()
{
    return 0;
}