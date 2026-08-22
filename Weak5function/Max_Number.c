#include <stdio.h>

long long findMaximum(const long long array[], int size)
{
    long long maximum;

    if (size == 1)
    {
        return array[0];
    }

    maximum = findMaximum(array, size - 1);
    return array[size - 1] > maximum ? array[size - 1] : maximum;
}

int main(void)
{
    int size;
    long long array[1000];

    scanf("%d", &size);

    for (int index = 0; index < size; index++)
    {
        scanf("%lld", &array[index]);
    }

    printf("%lld", findMaximum(array, size));

    return 0;
}
