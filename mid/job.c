#include <stdio.h>

int main(void)
{
    int N;
    if (scanf("%d", &N) != 1)
    {
        return 0;
    }

    for (int i = 0; i < N; i++)
    {
        int exp;
        if (scanf("%d", &exp) != 1)
        {
            break;
        }

        if (exp < 1)
        {
            printf("Entry-level candidate\n");
        }
        else if (exp <= 3)
        {
            printf("Junior candidate\n");
        }
        else if (exp <= 7)
        {
            printf("Mid-level candidate\n");
        }
        else
        {
            printf("Senior candidate\n");
        }
    }

    return 0;
}
