#include <stdio.h>

void shiftZeros(int array[], int size)
{
    int writeIndex = 0;

    for (int index = 0; index < size; index++)
    {
        if (array[index] != 0)
        {
            array[writeIndex++] = array[index];
        }
    }

    while (writeIndex < size)
    {
        array[writeIndex++] = 0;
    }
}

int main(void)
{
    int size;
    int array[1000];

    scanf("%d", &size);

    for (int index = 0; index < size; index++)
    {
        scanf("%d", &array[index]);
    }

    shiftZeros(array, size);

    for (int index = 0; index < size; index++)
    {
        printf("%d ", array[index]);
    }

    return 0;
}
