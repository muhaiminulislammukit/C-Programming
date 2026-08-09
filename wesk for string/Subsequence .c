#include <stdio.h>
#include <string.h>

int main(void)
{
    char s[10005];
    char target[] = "hello";
    int i = 0, j = 0;
    int lenS = 0, lenT = 5;

    scanf("%s", s);
    lenS = strlen(s);

    while (i < lenS && j < lenT)
    {
        if (s[i] == target[j])
        {
            j++;
        }
        i++;
    }

    if (j == lenT)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }

    return 0;
}
