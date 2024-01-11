import java.util.*;

class Program264
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);
        int iNo = 0;
        int iMask = 4;
        int iResult = 0;

        System.out.println("Enter number : ");
        iNo = sobj.nextInt();

        iResult = iNo & iMask;
    
        if(iResult == iMask)
        {
            System.out.println("3rd bit is ON");
        }
        else
        {
            System.out.println("3rd bit is OFF");
        }
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