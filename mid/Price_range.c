#include <stdio.h>

int main(void)
{
    int N;
    long long X, Y;
    if (scanf("%d %lld %lld", &N, &X, &Y) != 3)
    {
        return 0;
    }

    int count = 0;
    for (int i = 0; i < N; i++)
    {
        long long price;
        if (scanf("%lld", &price) != 1)
        {
            break;
        }
        if (price >= X && price <= Y)
        {
            count++;
        }
    }

    printf("%d\n", count);
    return 0;
}
