#include <stdio.h>

void printNumbers(int n)
{
    printf("%d", n);

    if (n > 1)
    {
        printf(" ");
        printNumbers(n - 1);
    }
}

int main(void)
{
    int n;

    scanf("%d", &n);
    printNumbers(n);
    printf("\n");

    return 0;
}
