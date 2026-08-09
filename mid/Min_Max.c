#include <stdio.h>
#include <string.h>

int main(void)
{
    char s1[1001], s2[1001], s3[1001];
    if (scanf("%1000s %1000s %1000s", s1, s2, s3) != 3)
    {
        return 0;
    }

    char *min_str = s1;
    char *max_str = s1;

    if (strcmp(s2, min_str) < 0)
    {
        min_str = s2;
    }
    if (strcmp(s3, min_str) < 0)
    {
        min_str = s3;
    }

    if (strcmp(s2, max_str) > 0)
    {
        max_str = s2;
    }
    if (strcmp(s3, max_str) > 0)
    {
        max_str = s3;
    }

    printf("%s\n%s\n", min_str, max_str);
    return 0;
}
