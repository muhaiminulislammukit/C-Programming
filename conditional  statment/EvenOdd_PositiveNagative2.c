#include <stdio.h>

int main() {
    int n;

    scanf("%d", &n);

    if (n % 2 == 0) {
        printf("this number is even\n");
    } else {
        printf("this number is odd\n");
    }

    if (n > 0) {
        printf("this number is positive\n");
    } else if (n < 0) {
        printf("this number is negative\n");
    }

    return 0;
}
