// Input : 5
/*
    1   *   2   *   3   *   4   *   5   *
*/

import java.util.*;

class Program248
{
    public static void Display(int iNo)
    {
        int iCnt = 0;

        for(iCnt = 1; iCnt <= iNo; iCnt++)
        {
            System.out.print(iCnt+"\t"+"*\t");
        }
        System.out.println();
    }

    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);

        int iValue = 0;

        System.out.println("Enter number : ");
        iValue = sobj.nextInt();

        Display(iValue);

        sobj.close();
    }
}