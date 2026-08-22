#include <stdio.h>

int main(void)
{
    int rows, columns;
    int matrix[100][100];

    scanf("%d %d", &rows, &columns);

    for (int row = 0; row < rows; row++)
    {
        for (int column = 0; column < columns; column++)
        {
            scanf("%d", &matrix[row][column]);
        }
    }

    for (int row = 0; row < rows; row++)
    {
        int temporary = matrix[row][0];
        matrix[row][0] = matrix[row][columns - 1];
        matrix[row][columns - 1] = temporary;
    }

    for (int column = 0; column < columns; column++)
    {
        int temporary = matrix[0][column];
        matrix[0][column] = matrix[rows - 1][column];
        matrix[rows - 1][column] = temporary;
    }

    for (int row = 0; row < rows; row++)
    {
        for (int column = 0; column < columns; column++)
        {
            if (column > 0)
            {
                printf(" ");
            }
            printf("%d", matrix[row][column]);
        }
        printf("\n");
    }

    return 0;
}
