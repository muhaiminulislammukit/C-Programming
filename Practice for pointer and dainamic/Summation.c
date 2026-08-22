#include <stdio.h>
#include <stdlib.h>

long long absolute_sum(const long long *numbers, int count)
{
    long long total = 0;

    for (int index = 0; index < count; index++)
        total += *(numbers + index);

    return llabs(total);
}

int main(void)
{
    int n;
    scanf("%d", &n);

    long long *numbers = malloc((size_t)n * sizeof(*numbers));
    if (numbers == NULL)
        return 1;

    for (int index = 0; index < n; index++)
        scanf("%lld", numbers + index);

    printf("%lld\n", absolute_sum(numbers, n));
    free(numbers);
    return 0;
}
