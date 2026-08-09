#include <stdio.h>

int main(void)
{
    int N;
    long long T;
    if (scanf("%d %lld", &N, &T) != 2)
    {
        return 0;
    }

    long long sum = 0;
    int count = 0;
    for (int i = 0; i < N; i++)
    {
        long long time;
        if (scanf("%lld", &time) != 1)
        {
            break;
        }
        if (sum + time <= T)
        {
            sum += time;
            count++;
        }
        else
        {
            break;
        }
    }

    printf("%d\n", count);
    return 0;
}
