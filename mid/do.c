#include <stdio.h>

int main(void)
{
    int N, K;
    if (scanf("%d %d", &N, &K) != 2)
    {
        return 0;
    }

    for (int i = 0; i < N; i++)
    {
        for (int j = 1; j <= K; j++)
        {
            printf("%d ", j);
        }
        printf("\n");
    }

    return 0;
}
