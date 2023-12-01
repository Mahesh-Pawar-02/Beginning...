#include<iostream>
using namespace std;

class Number
{
    private:
        int iNo;
    
    public:
        Number(int x)
        {
            iNo = x;
        }

    // Logics
};

int main()
{
    int iValue = 0, iRet = 0;

    cout<<"Enter the number : "<<endl;
    cin>>iValue;

    Number nobj(iValue);
    return 0;
}