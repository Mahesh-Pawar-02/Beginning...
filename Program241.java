import java.util.*;

class Arithematic
{
    public int Addition(int iValeue1, int iValeue2)
    {
        int iSum = 0;
        iSum = iValeue1 + iValeue2;
        return iSum;
    }
}

class Program241
{
    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);
        Arithematic aobj = new Arithematic();

        int iNo1 = 0, iNo2 = 0;
        int iAns = 0;

        System.out.println("Enter first number : ");
        iNo1 = sobj.nextInt();

        System.out.println("Enter second number : ");
        iNo2 = sobj.nextInt();

        iAns = aobj.Addition(iNo1,iNo2);
        System.out.println("Addition is : "+iAns);
    }
}