#include <stdio.h>

// Write a program to print the Fibonacci series up to n terms using recursion.
int fibonacci(int n)
{
    if (n == 0)  // Base case: Fibonacci of 0 is 0
        return 0;
    else if (n == 1)
        return 1;
    else
        return fibonacci(n - 1) + fibonacci(n - 2);
}

int main()
{
    int n, i; // n is the number of terms to be printed

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printf("Fibonacci Series: ");

    for (i = 0; i < n; i++)
    {
        printf("%d ", fibonacci(i)); // Print the Fibonacci number for the current term
    }

    return 0;
}