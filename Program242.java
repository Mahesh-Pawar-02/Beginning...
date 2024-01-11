import java.util.*;

class Arithematic
{
    public int iValeue1;
    public int iValeue2;

    public Arithematic(int A, int B)
    {
        this.iValeue1 = A;
        this.iValeue2 = B;
    }

    public int Addition()
    {
        int iSum = 0;
        iSum = this.iValeue1 + this.iValeue2;
        return iSum;
    }
}

class Program242
{
    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);

        int iNo1 = 0, iNo2 = 0;
        int iAns = 0;

        System.out.println("Enter first number : ");
        iNo1 = sobj.nextInt();

        System.out.println("Enter second number : ");
        iNo2 = sobj.nextInt();

        Arithematic aobj = new Arithematic(iNo1,iNo2);

        iAns = aobj.Addition();
        System.out.println("Addition is : "+iAns);
    }
}