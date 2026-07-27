#include <stdio.h>

int main()
{
    int n, m;
    if (scanf("%d %d", &n, &m) != 2)
    {
        return 0;
    }

    int counts[1001] = {0};
    for (int i = 0; i < n; i++)
    {
        int x;
        scanf("%d", &x);
        if (x >= 1 && x <= m)
        {
            counts[x]++;
        }
    }

    for (int i = 1; i <= m; i++)
    {
        printf("%d\n", counts[i]);
    }

    return 0;
}
