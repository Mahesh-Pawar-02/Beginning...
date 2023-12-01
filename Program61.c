#include<stdio.h>
// Input : 7521
// Output : 15

int SumDigits(int iNo)
{
    int iSum = 0;

    while(iNo != 0)
    {
        iSum = iSum + (iNo % 10);
        iNo = iNo / 10;
    }
    return iSum;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number : \n");
    scanf("%d",&iValue);
    iRet = SumDigits(iValue);

    printf("Sum of digits are : %d\n",iRet);

    return 0;
}