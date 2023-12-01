#include<stdio.h>
#include<stdlib.h>

int EvenCount(int Arr[], int iSize)  // (100,4)
{
    int iCnt = 0;
    int iEvenCnt = 0;

    //      1           2           3
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if((Arr[iCnt] % 2) == 0)
        {
           iEvenCnt++;
        }
    }
    return iEvenCnt;
}

int main()
{
    int iCount = 0, iCnt = 0, iRet = 0;
    int *ptr = NULL;

    printf("Enter the number of elements that you want to enter : \n");
    scanf("%d",&iCount);

    ptr = (int *)malloc(iCount * sizeof(int));

    printf("Dynamic memory gets allocated succesfully for %d elements\n",iCount);
    printf("Enter the %d values : \n",iCount);
    //      1           2           3
    for(iCnt = 0; iCnt < iCount; iCnt++)    // O(N)
    {
        printf("\nEnter the element no %d : ",iCnt+1);
        scanf("%d",&ptr[iCnt]);     // 4
    }

    iRet = EvenCount(ptr, iCount);   // Display(100,4)
    
    printf("Number of even elements are : %d\n",iRet);
    
    free(ptr);  // free(100)
    printf("Dynamic memory gets deallocated succesfully...\n");

    return 0;
}