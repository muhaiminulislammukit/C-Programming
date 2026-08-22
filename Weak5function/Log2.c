#include <stdio.h>

long long floorLog2(long long number)
{
    if (number < 2)
    {
        return 0;
    }

    return 1 + floorLog2(number / 2);
}

int main(void)
{
    long long number;

    scanf("%lld", &number);
    printf("%lld", floorLog2(number));

    return 0;
}
