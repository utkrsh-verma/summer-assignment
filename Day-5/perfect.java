import java.util.Scanner;

public class perfect 
{
    public static void main(String[] args)
    {
        int n;
        int sum=0;
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter a Number:");
        n=sc.nextInt();

        for(int i=1;i<n;i++)
        {
        if(n%i==0)
        {
            sum=sum+i;
        }
        
    }
    if(sum==n)
    {
        System.out.println("Number is Perfect");
    }
    else
    {
        System.out.println("number is not Perfect");
    }
}
}
