#include <stdio.h>
#include <stdbool.h>

bool is_lucky(int n)
{
    if (n <= 0)
    {
        return false;
    }

    while (n > 0)
    {
        int digit = n % 10;
        if (digit != 4 && digit != 7)
        {
            return false;
        }
        n /= 10;
    }

    return true;
}

int main(void)
{
    int A, B;
    scanf("%d %d", &A, &B);

    int found = 0;
    for (int i = A; i <= B; i++)
    {
        if (is_lucky(i))
        {
            if (found)
            {
                printf(" ");
            }
            printf("%d", i);
            found = 1;
        }
    }

    if (!found)
    {
        printf("-1");
    }

    return 0;
}
