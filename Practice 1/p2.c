#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    for(int i = N; i >= 1; i--) {       // row loop
        for(int j = i; j >= 1; j--) {   // column loop
            printf("%d ", j);
        }
        printf("\n");                    // end of row
    }

    return 0;
}