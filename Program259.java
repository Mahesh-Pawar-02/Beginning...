import java.util.*;

class Program259
{
    public static void Display(String str)
    {
        int iCnt = 0;
        char Arr[] = str.toCharArray();
        for(iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            System.out.println(Arr[iCnt]);
        }
    }
    
    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);

        String str = null;

        System.out.println("Enter your name : ");
        str = sobj.nextLine();

        Display(str);
        
        sobj.close();
    }
}