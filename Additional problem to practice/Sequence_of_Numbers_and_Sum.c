#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int N, M;
    while (scanf("%d %d", &N, &M) == 2)
    {
        if (N <= 0 || M <= 0)
        {
            break;
        }

        int start = N < M ? N : M;
        int end = N < M ? M : N;
        int sum = 0;

        for (int i = start; i <= end; i++)
        {
            if (i > start)
            {
                printf(" ");
            }
            printf("%d", i);
            sum += i;
        }

        printf(" sum =%d\n", sum);
    }
    return 0;
}
