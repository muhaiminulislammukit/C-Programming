#include <stdio.h>

void replace_values(int *numbers, int count)
{
    for (int index = 0; index < count; index++)
    {
        if (*(numbers + index) > 0)
            *(numbers + index) = 1;
        else if (*(numbers + index) < 0)
            *(numbers + index) = 2;
    }
}

int main(void)
{
    int n;
    int numbers[1000];

    scanf("%d", &n);
    for (int index = 0; index < n; index++)
        scanf("%d", numbers + index);

    replace_values(numbers, n);

    for (int index = 0; index < n; index++)
        printf("%d ", *(numbers + index));
    printf("\n");
    return 0;
}
