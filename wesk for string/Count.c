#include <stdio.h>

int main(void)
{
    char s[1000005];
    int sum = 0;
    int i = 0;

    scanf("%s", s);

    while (s[i] != '\0')
    {
        sum += s[i] - '0';
        i++;
    }

    printf("%d\n", sum);
    return 0;
}
