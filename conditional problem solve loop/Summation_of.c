#include <stdio.h>

int main() {
    
    int N;
    scanf("%d",&N);

    long long sum = (1ll *(N + 1) * N / 2);

    printf("%lld\n", sum);

    return 0;
}