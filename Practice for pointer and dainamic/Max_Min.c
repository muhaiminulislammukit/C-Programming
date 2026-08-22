#include <stdio.h>

void find_min_max(const int *first, const int *second, const int *third,
                  int *minimum, int *maximum)
{
    *minimum = *first;
    *maximum = *first;

    if (*second < *minimum)
        *minimum = *second;
    if (*third < *minimum)
        *minimum = *third;
    if (*second > *maximum)
        *maximum = *second;
    if (*third > *maximum)
        *maximum = *third;
}

int main(void)
{
    int a, b, c;
    int minimum, maximum;

    scanf("%d %d %d", &a, &b, &c);
    find_min_max(&a, &b, &c, &minimum, &maximum);
    printf("%d %d\n", minimum, maximum);
    return 0;
}
