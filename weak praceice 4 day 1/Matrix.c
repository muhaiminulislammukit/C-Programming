#include <stdio.h>
#include <stdlib.h>

int main() {
    int N;
    scanf("%d", &N);

    int A[100][100];

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    int primary = 0, secondary = 0;

    for (int i = 0; i < N; i++) {
        primary += A[i][i];
        secondary += A[i][N - 1 - i];
    }

    printf("%d\n", abs(primary - secondary));

    return 0;
}