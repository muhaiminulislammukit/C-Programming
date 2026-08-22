#include <stdio.h>

void findMinMax(const int array[], int size, int *minimum, int *maximum)
{
    *minimum = array[0];
    *maximum = array[0];

    for (int index = 1; index < size; index++)
    {
        if (array[index] < *minimum)
        {
            *minimum = array[index];
        }

        if (array[index] > *maximum)
        {
            *maximum = array[index];
        }
    }
}

int main(void)
{
    int size;
    int array[1000];
    int minimum;
    int maximum;

    scanf("%d", &size);

    for (int index = 0; index < size; index++)
    {
        scanf("%d", &array[index]);
    }

    findMinMax(array, size, &minimum, &maximum);
    printf("%d %d", minimum, maximum);

    return 0;
}
