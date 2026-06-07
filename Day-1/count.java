import java.util.Scanner;
public class count {
    public static void main(String [] args)
    {
        int n;
        int digitCount=0;

        Scanner sc = new Scanner(System.in);
        System.out.println("Enter a number: ");
        n = sc.nextInt();

        while(n>0)
        {
            n = n/10;
            digitCount++;
        }
        System.out.println("Number of digits in the given number is: " + digitCount);

    }
    
}
