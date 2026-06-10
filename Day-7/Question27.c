#include <stdio.h>
// Write a program to calculate the sum of digits of a number using recursion.
int sumOfDigits(int n)
{
    if (n == 0) // Base case: if n is 0, the sum of digits is 0
        return 0;
    else
        return (n % 10) + sumOfDigits(n / 10);
}

int main()
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Sum of digits = %d\n", sumOfDigits(num));

    return 0;
}