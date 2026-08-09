#include <stdio.h>
#include <math.h>
#include <stdbool.h>

bool is_prime(int x)
{
    if (x <= 1)
    {
        return false;
    }
    if (x <= 3)
    {
        return true;
    }
    if (x % 2 == 0 || x % 3 == 0)
    {
        return false;
    }

    int limit = (int)sqrt((double)x);
    for (int i = 5; i <= limit; i += 6)
    {
        if (x % i == 0 || x % (i + 2) == 0)
        {
            return false;
        }
    }

    return true;
}

int main(void)
{
    int X;
    if (scanf("%d", &X) != 1)
    {
        return 0;
    }

    if (is_prime(X))
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }

    return 0;
}
