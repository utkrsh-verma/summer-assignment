/*
Write a program to print character pyramid.
    A
   ABA
  ABCBA
 ABCDCBA
ABCDEDCBA
*/

import java.util.Scanner;
public class Question40 {
    public static void main(String[] args)
    {
        int n;
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the number of rows:");
        n=sc.nextInt();

        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=n-i;j++)
            {
                System.out.print(" ");
            }
            for(int k=1;k<=i;k++)
            {
                System.out.print((char)(k+64));
            }
            for(int l=i-1;l>=1;l--)
            {
                System.out.print((char)(l+64));
            }
            System.out.println();
        }
    }
}
