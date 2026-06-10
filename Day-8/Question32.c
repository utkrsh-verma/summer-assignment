#include <stdio.h>
int main()
{
    int i, j, rows = 5;

    for (i = 1; i <= rows; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("%d", i);
        }
        printf("\n");
    }

    return 0;
}

// Write a program to print the following pattern for n rows:
// 1
// 2 2
// 3 3 3
// 4 4 4 4
// 5 5 5 5 5
