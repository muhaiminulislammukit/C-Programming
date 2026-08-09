#include <stdio.h>
#include <string.h>

int main(void)
{
    int n, i, j, k, lenS, lenT;
    char s[55], t[55], ans[110];

    scanf("%d", &n);

    while (n--)
    {
        scanf("%s %s", s, t);

        lenS = strlen(s);
        lenT = strlen(t);
        k = 0;

        for (i = 0, j = 0; i < lenS && j < lenT; i++, j++)
        {
            ans[k++] = s[i];
            ans[k++] = t[j];
        }

        while (i < lenS)
        {
            ans[k++] = s[i++];
        }

        while (j < lenT)
        {
            ans[k++] = t[j++];
        }

        ans[k] = '\0';
        printf("%s\n", ans);
    }

    return 0;
}
