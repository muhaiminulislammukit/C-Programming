

#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    for(int i = 1; i <= N; i++) {       // row loop
        for(int j = 1; j <= i; j++) {   // column loop
            printf("%d ", j);
        }
        printf("\n");                    // end of row
    }

    return 0;
}