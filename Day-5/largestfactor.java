import java.util.Scanner;
public static void main(String[] args)
{
    int n;
    Scanner sc = new Scanner(System.in);
    System.out.println("Enter a Number:");
    n=sc.nextInt();

    for(int i=n/2;i>=1;i--)
    {
        if(n%i==0)
        {
            System.out.println("The largest factor of "+n+" is: "+i);
            break;
        }
    }
}