#include <stdio.h>

int main() {

    int N;
    scanf("%d", &N);

    long long A[N];

    for (int i = 0; i < N; i++) {
        scanf("%lld", &A[i]);
    }

    int left = 0;
    int right = N - 1;

    while (left < right) {
        if (A[left] != A[right]) {
            printf("NO\n");
            return 0;
        }
        left++;
        right--;
    }

    printf("YES\n");

    return 0;
}