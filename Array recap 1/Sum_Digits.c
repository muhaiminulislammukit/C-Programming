#include <stdio.h>

int main() {
    char s[1005];
    if (scanf("%1004s", s) != 1) {
        return 0;
    }

    int sum = 0;
    for (int i = 0; s[i] != '\0'; i++) {
        if (s[i] >= '0' && s[i] <= '9') {
            sum += s[i] - '0';
        }
    }

    printf("%d\n", sum);
    return 0;
}
