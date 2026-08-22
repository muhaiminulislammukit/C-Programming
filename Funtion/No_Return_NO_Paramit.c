#include <stdio.h>

int add()
{
    int a, b;

    scanf("%d %d", &a, &b);

    printf("function call\n");

    int sum = a + b;

    printf("%d\n", sum);

    return sum;
}

void mul(int x, int y)
{
    printf("%d\n", x * y);
}

int main()
{
    mul(add(), 20);

    return 0;
}