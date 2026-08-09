#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int a[n];

    // input
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    int min = a[0];
    int pos = 1; // 1-index

    // find minimum
    for (int i = 1; i < n; i++) {
        if (a[i] < min) {
            min = a[i];
            pos = i + 1;
        }
    }

    printf("%d %d\n", min, pos);

    return 0;
}