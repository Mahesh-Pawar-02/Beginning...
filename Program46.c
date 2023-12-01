#include<stdio.h>
#include<stdbool.h>

void DisplayFactors(int iNo)
{
    int iCnt = 0;

    printf("Factors of %d are : \n",iNo);
    //      1           2       3
    for(iCnt = 1; iCnt < iNo; iCnt++)
    {
        if((iNo % iCnt) == 0)   // 4
        {
            printf("%d\n",iCnt);
        }
    }
}

int main()
{   
    int iValue = 0;

    printf("Enter the number : \n");
    scanf("%d",&iValue);
    DisplayFactors(iValue);

    return 0;
}

// Time Complexity : O(N)

/*
    Time Complexity     Input       Interations Count
    O(N)                100         100
    O(2N)               100         200
    O(N^2)              100         10000
    O(N^3)              100         100000
    O(N/2)              100         50
    O(N/4)              100         25
*/