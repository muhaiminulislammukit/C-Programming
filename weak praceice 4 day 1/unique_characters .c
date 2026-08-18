#include <stdio.h>
#include <string.h>

int main() {
    int N;
    char s[1000];
    int freq[26] = {0};

    scanf("%d", &N);
    scanf("%s", s);

    for (int i = 0; i < N; i++) {
        if (s[i] >= 'a' && s[i] <= 'z') {
            freq[s[i] - 'a'] = 1;
        }
    }

    for (int i = 0; i < 26; i++) {
        if (freq[i] == 1) {
            printf("%c", 'a' + i);
        }
    }

    printf("\n");
    return 0;
}