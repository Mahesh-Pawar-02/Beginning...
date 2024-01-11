#include<iostream>
using namespace std;

typedef struct node
{
    int data;
    struct node *next;
}NODE, *PNODE, **PPNODE;

class SinglyLL
{
    public:
        PNODE first;
        int Count;

        SinglyLL()
        {
            first = NULL;
            Count = 0;
        }

        void InsertFirst(int no);
        void InsertLast(int no);
        void InsertAtPos(int no, int ipos);
        void DeleteFirst();
        void DeleteLast();
        void DeleteAtPos(int ipos);
        void Display();
};

int main()
{
    SinglyLL obj();

    obj.InsertFirst(51);
    obj.InsertFirst(21);
    obj.InsertFirst(11);
    
    obj.Display();
    return 0;
}