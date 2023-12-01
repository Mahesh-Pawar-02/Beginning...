#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0;

    //      1           2       3    
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("Jay Ganesh...\n");  // 4
    }  
}

int main()
{
    Display(8);

    return 0;
}