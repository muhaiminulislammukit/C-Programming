#include <stdio.h>
#include <string.h>

int main() {

    char s[1001];

    scanf("%s", s);

    int len = strlen(s);

    for (int i = 0; i < len / 2; i++) {

        if (s[i] != s[len - 1 - i]) {
            printf("NO\n");
            return 0;
        }
    }

    printf("YES\n");

    return 0;
}