#include<stdio.h>

void Display(int iNo)
{
    int iDigit = 0;
    printf("---------------------------------------------\n");
    printf("Value of iNo is : %d\n",iNo);   // 721

    printf("---------------------------------------------\n");
    iDigit = iNo % 10;
    printf("Digits is : %d\n",iDigit);  // 1
    iNo = iNo / 10;     // 72
    printf("Value of iNo is : %d\n",iNo);   // 72

    printf("---------------------------------------------\n");
    iDigit = iNo % 10;
    printf("Digits is : %d\n",iDigit);  // 2
    iNo = iNo / 10;     // 7
    printf("Value of iNo is : %d\n",iNo);   // 7

    printf("---------------------------------------------\n");
    iDigit = iNo % 10;
    printf("Digits is : %d\n",iDigit);  // 7
    iNo = iNo / 10;     // 0
    printf("Value of iNo is : %d\n",iNo);   // 0

}

int main()
{
    int iValue = 721;

    //printf("Enter number : \n");
    //scanf("%d",&iValue);

    Display(iValue);

    return 0;
}