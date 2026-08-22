#include <stdio.h>

void printNumbers(int current, int n)
{
    if (current > n)
        return;

    printf("%d\n", current);
    printNumbers(current + 1, n);
}

int main(void)
{
    int n;

    scanf("%d", &n);
    printNumbers(1, n);

    return 0;
}
