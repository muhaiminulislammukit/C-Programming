#include <stdio.h>

int sum(const int *first, const int *second)
{
    return *first + *second;
}

int main(void)
{
    int x, y;
    scanf("%d %d", &x, &y);
    printf("%d\n", sum(&x, &y));
    return 0;
}
