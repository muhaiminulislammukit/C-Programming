#include <stdio.h>

void printMessage(int n)
{
    if (n == 0)
        return;

    printf("I love Recursion\n");
    printMessage(n - 1);
}

int main(void)
{
    int n;

    scanf("%d", &n);
    printMessage(n);

    return 0;
}
