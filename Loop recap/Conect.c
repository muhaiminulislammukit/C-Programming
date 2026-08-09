#include <stdio.h>

int main()
{
    int cnt = 0;

    for (int i = 0; i < 3; i++)          // outer loop
    {
        for (int j = 0; j < 4; j++)      // middle loop
        {
            for (int k = 0; k < 15; k++) // inner loop
            {
                cnt++;
                printf("%d\n", cnt);
            }
        }
    }

    return 0;
}