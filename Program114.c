/*
    iRow = 6
    iCol = 6

    #   $   $   $   $   $
    *   #   $   $   $   $
    *   *   #   $   $   $
    *   *   *   #   $   $
    *   *   *   *   #   $
    *   *   *   *   *   #
    

    #   $   $   $   
    *   #   $   $       
    *   *   #   $   
    *   *   *   #   

*/
#include<stdio.h>

void Display(int iRow, int iCol)
{
    int i =0, j = 0;

    //    1       2        3
    for(i = 1; i<= iRow; i++)   // Outer
    {   //    1       2       3
        for(j = 1; j<= iCol; j++)   // Inner
        {
            if(i >= j)  
            {
                printf("*\t");
            }
        }
        printf("\n\n");
    }
}

int main()
{
    int iNo1 = 0, iNo2 =0;

    printf("Enter number of rows : \n");
    scanf("%d",&iNo1);

    printf("Enter number of columns : \n");
    scanf("%d",&iNo2);

    Display(iNo1, iNo2);

    return 0;
}