import java.util.*;

class Program250
{
    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);

        int iSize = 0, iCnt = 0;

        System.out.println("Enter the number of elements : ");
        iSize  = sobj.nextInt();

        int Arr[] = new int[iSize];

        System.out.println("Enter the elements : ");
        for(iCnt = 0; iCnt < iSize; iCnt++)
        {
            Arr[iCnt] = sobj.nextInt();
        }

        System.out.println("Elements of the array are : ");
        for(iCnt = 0; iCnt < iSize; iCnt++)
        {
            System.out.println(Arr[iCnt]);
        }
        
        sobj.close();
    }
}