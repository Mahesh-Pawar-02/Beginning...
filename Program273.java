import java.util.*;

class Program273
{
    public static boolean CheckBit(int iNo)
    {
        int iMask = 0x00004040;
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
            System.out.println("7th & 15th bits are ON");
        }
        else
        {
            System.out.println("Bits are off");
        }
    }
}

/*

    Bit position 7 and 15

    0000    0000    0000    0000    0100    0000    0100    0000
    0       0       0       0       4       0       4       0

    0x00004040
    
/