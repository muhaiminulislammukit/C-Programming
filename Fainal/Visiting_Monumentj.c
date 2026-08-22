#include <stdio.h>

int main(void)
{
    int test_cases;

    scanf("%d", &test_cases);

    while (test_cases-- > 0)
    {
        int number;
        scanf("%d", &number);

        for (int value = 1; value <= number; value++)
        {
            if (value > 1)
            {
                printf(" ");
            }
            printf("%d", value);
        }

        for (int value = number - 1; value >= 1; value--)
        {
            printf(" %d", value);
        }

        printf("\n");
    }

    return 0;
}
