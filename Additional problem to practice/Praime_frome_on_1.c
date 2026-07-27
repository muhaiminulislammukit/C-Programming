#include <stdio.h>
#include <stdbool.h>
#include <string.h>

int main(void)
{
    int N;
    if (scanf("%d", &N) != 1)
    {
        return 0;
    }

    bool is_prime[1001];
    memset(is_prime, true, sizeof(is_prime));
    is_prime[0] = false;
    is_prime[1] = false;

    for (int i = 2; i * i <= N; i++)
    {
        if (is_prime[i])
        {
            for (int j = i * i; j <= N; j += i)
            {
                is_prime[j] = false;
            }
        }
    }

    for (int i = 2; i <= N; i++)
    {
        if (is_prime[i])
        {
            printf("%d", i);
            if (i < N)
            {
                printf(" ");
            }
        }
    }

    return 0;
}
