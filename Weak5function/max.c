#include <stdio.h>

int maxOfTwo(int first, int second)
{
    return first > second ? first : second;
}

int minOfTwo(int first, int second)
{
    return first < second ? first : second;
}

void findMaxMin(const int array[], int size, int *maximum, int *minimum)
{
    *maximum = array[0];
    *minimum = array[0];

    for (int index = 1; index < size; index++)
    {
        *maximum = maxOfTwo(*maximum, array[index]);
        *minimum = minOfTwo(*minimum, array[index]);
    }
}

int main(void)
{
    int size;
    int array[1000];
    int maximum;
    int minimum;

    scanf("%d", &size);

    for (int index = 0; index < size; index++)
    {
        scanf("%d", &array[index]);
    }

    findMaxMin(array, size, &maximum, &minimum);
    printf("%d %d", minimum, maximum);

    return 0;
}
