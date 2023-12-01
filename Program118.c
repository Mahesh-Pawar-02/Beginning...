#include<stdio.h>
#include<stdbool.h>

bool CheckCapital(char cValue)
{
    if((cValue >= 65) && (cValue <= 90))
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    char ch = '\0';
    bool bRet = false;

    printf("Enter the character : \n");
    scanf("%c",&ch);

    bRet = CheckCapital(ch);
    if(bRet == true)
    {
        printf("Its a capital letter\n");
    }
    else
    {
        printf("Its not a capital letter\n");
    }
    return 0;
}