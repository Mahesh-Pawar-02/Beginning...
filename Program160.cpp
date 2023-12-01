#include<iostream>
using namespace std;

class String
{
    private:
        char *str;
        int iSize;

    public:
        String()
        {
            iSize = 20;
            str = new char[iSize];
        }

        String(int X)
        {
            iSize = X;
            str = new char[iSize];
        }

        ~String()
        {
            delete []str;
        }

        void Accept()
        {
            cout<<"Enter the string : "<<endl;
            cin.getline(str,iSize);
        }

        void Display()
        {
            cout<<"String is : "<<str<<endl;
        }

        // Logic
};

int main()
{
    String *sobj1 = new String(30);
    String *sobj2 = new String();

    sobj1->Accept();
    sobj1->Display();
    
    delete sobj1;
    delete sobj2;

    return 0;
}

