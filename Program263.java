import java.util.*;

class Program263
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);
        int iNo = 0;
        int iDigit = 0;
        int iCnt = 0;

        System.out.println("Enter number : ");
        iNo = sobj.nextInt();

        while(iNo != 0)
        {
            iDigit = iNo % 2;
            iNo = iNo / 2;
            if(iDigit == 1)
            {
                iCnt++;
            }
        }

        System.out.println("Number of 1 bit are : "+iCnt);
    }
}

/*

Input            1   1   0   1   0   0   0   1
Mask             0   0   0   0   0   1   0   0      &
------------------------------------------------------
Result           0   0   0   0   0   0   0   0





Input            1   0   0   0   1   1   1   1 
Mask             0   0   0   0   0   1   0   0      &
------------------------------------------------------
Result           0   0   0   0   0   1   0   0


*/