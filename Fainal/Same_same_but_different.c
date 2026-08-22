#include <stdio.h>

int main(void)
{
    char first[101], second[101], third[101];
    int operations = 0;

    scanf("%100s %100s %100s", first, second, third);

    for (int position = 0; first[position] != '\0'; position++)
    {
        int matching_strings = 1;

        if (first[position] == second[position])
        {
            matching_strings++;
        }
        if (first[position] == third[position])
        {
            matching_strings++;
        }

        if (second[position] == third[position] &&
            second[position] != first[position])
        {
            matching_strings = 2;
        }

        operations += 3 - matching_strings;
    }

    printf("%d\n", operations);

    return 0;
}
