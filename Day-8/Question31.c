#include <stdio.h>
int main()
{
    int i, j, rows = 5;

    for (i = 1; i <= rows; i++)
    {
        for (j = 0; j < i; j++)
        {
            printf("%c", 'A' + j);
        }
        printf("\n");
    }

    return 0;
}

// Write a program to print the following pattern for n rows:
// A
// A B
// A B C
// A B C D
// A B C D E
