#include <stdio.h>
int main()
{
    int rows, i, j;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    for (i = 1; i <= rows; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("%d ", j);
        }
        printf("\n");
    }

    return 0;
}

// Write a program to print the following pattern for n rows:
// 1    
// 1 2
// 1 2 3
// 1 2 3 4
// 1 2 3 4 5
