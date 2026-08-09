#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    // Check if n is composite (not prime and > 1)
    int is_prime = 1;

    if (n < 2)
    {
        is_prime = 1; // 1 and below are not lucky
    }
    else
    {
        for (int i = 2; i * i <= n; i++)
        {
            if (n % i == 0)
            {
                is_prime = 0; // n is composite (lucky)
                break;
            }
        }
    }

    if (is_prime == 0)
    {
        printf("YES\n"); // Lucky number (composite)
    }
    else
    {
        printf("NO\n"); // Not lucky (prime or 1)
    }
    return 0;
}
