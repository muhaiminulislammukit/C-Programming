#include <stdio.h>

int main(void)
{
    int rows, columns;
    int is_jadu = 1;

    scanf("%d %d", &rows, &columns);

    for (int row = 0; row < rows; row++)
    {
        for (int column = 0; column < columns; column++)
        {
            int value;
            int expected;

            scanf("%d", &value);
            expected = (row == column || row + column == rows - 1) ? 1 : 0;

            if (value != expected)
            {
                is_jadu = 0;
            }
        }
    }

    if (rows != columns)
    {
        is_jadu = 0;
    }

    printf(is_jadu ? "YES\n" : "NO\n");

    return 0;
}
