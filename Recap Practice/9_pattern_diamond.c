#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    // Upper half of diamond
    for (int i = 1; i <= n; i++)
    {
        // Print leading spaces
        for (int j = 0; j < n - i; j++)
        {
            printf(" ");
        }
        // Print stars
        for (int j = 0; j < 2 * i - 1; j++)
        {
            printf("*");
            if (j < 2 * i - 2)
                printf(" ");
        }
        printf("\n");
    }

    // Lower half of diamond
    for (int i = n - 1; i >= 1; i--)
    {
        // Print leading spaces
        for (int j = 0; j < n - i; j++)
        {
            printf(" ");
        }
        // Print stars
        for (int j = 0; j < 2 * i - 1; j++)
        {
            printf("*");
            if (j < 2 * i - 2)
                printf(" ");
        }
        printf("\n");
    }

    return 0;
}
