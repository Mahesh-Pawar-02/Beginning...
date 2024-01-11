import java.util.*;

class Program274
{
    public static boolean CheckBit(int iNo)
    {
        int iMask = 0x00000a00;
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
            System.out.println("10th & 12th bits are ON");
        }
        else
        {
            System.out.println("Bits are off");
        }
    }
}

/*

    Bit position 10 and 12

    0000    0000    0000    0000    0000    1010    0000    0000
    0       0       0       0       0       a       0       0

    0x00000a00
    
/