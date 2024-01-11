import java.util.*;

class Program246
{
    public static void EvenOddFactors(int iNo)
    {
        int iFact = 1;
        int iCnt = 0;

        for(iCnt = 1; iCnt <= iNo; iCnt++)
        {
            if((iNo % iCnt) == 0)
            {
                if((iCnt % 2) == 0)
                {
                    System.out.println("Even factor is : "+iCnt);
                }
                else
                {
                    System.out.println("Odd factor is : "+iCnt);
                }
            }
        }
    }

    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);

        int iValue = 0;

        System.out.println("Enter number : ");
        iValue = sobj.nextInt();

        EvenOddFactors(iValue);

        sobj.close();
    }
}