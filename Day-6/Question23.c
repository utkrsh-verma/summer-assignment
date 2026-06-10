#include <stdio.h>
int main() {
    int num, count = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    while (num > 0) {
        count += num & 1;  //just check the last bit
        num >>= 1;         
    }

    printf("Number of set bits = %d\n", count);

    return 0;
}