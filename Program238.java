import java.io.*;

class Program238
{
    public static void main(String Arg[]) throws Exception
    {
        BufferedReader bobj = new BufferedReader(new InputStreamReader(System.in));

        int iNo1 = 0, iNo2 = 0;
        int iAns = 0;

        System.out.println("Enter first number : ");
        iNo1 = Integer.parseInt(bobj.readLine());

        System.out.println("Enter second number : ");
        iNo2 = Integer.parseInt(bobj.readLine());

        iAns = iNo1 + iNo2;
        System.out.println("Addition is : "+iAns);

        bobj.close();
    }
}