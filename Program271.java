import java.util.*;

class Program271
{
    public static boolean CheckBit(int iNo)
    {
        int iMask = 0x00000100;
        int iResult = 0;
        iResult = iNo & iMask;

        if(iResult == iMask)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);
        int iNo = 0;
        boolean bRet = false;

        System.out.println("Enter number : ");
        iNo = sobj.nextInt();

        bRet = CheckBit(iNo);
    
        if(bRet == true)
        {
            System.out.println("9th bit is ON");
        }
        else
        {
            System.out.println("9th bit is OFF");
        }
    }
}

/*
    iMask = 256;

    0000    0000    0000    0000    0000    0001    0000    0000
    0       0       0       0       0       1       0       0

    0x00000100
/