#include <stdio.h>

int main()
{
    int n;
    int years, months, days;

    scanf("%d", &n);

    years = n / 365;
    n %= 365;
    months = n / 30;
    days = n % 30;

    printf("%d years\n%d months\n%d days\n", years, months, days);

    return 0;
}
