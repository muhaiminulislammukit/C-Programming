#include <stdio.h>

int main()
{
    int n;
    if (scanf("%d", &n) != 1)
    {
        return 0;
    }

    long long a[1000];
    for (int i = 0; i < n; i++)
    {
        scanf("%lld", &a[i]);
    }

    for (int i = n - 1; i >= 0; i--)
    {
        printf("%lld", a[i]);
        if (i > 0)
        {
            printf(" ");
        }
    }
    printf("\n");

    return 0;
}
