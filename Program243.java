import Marvellous.Arithematic;
import java.util.*;

class Program243
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

// 1 : javac -d . Arithematic.java
// 2 : javac Program243.java
// 3 : java Program243
