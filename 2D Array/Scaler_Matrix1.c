#include <stdio.h>

int main() {

    int n;
    scanf("%d", &n);

    int m[n][n];

    // Input
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            scanf("%d", &m[i][j]);
        }
    }

    int element = m[0][0];
    int flag = 1;

    // Check Scalar Matrix
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {

            if(i == j) {

                // Diagonal elements must be same
                if(m[i][j] != element) {
                    flag = 0;
                    break;
                }

            } else {

                // Non-diagonal elements must be 0
                if(m[i][j] != 0) {
                    flag = 0;
                    break;
                }
            }
        }

        if(flag == 0) {
            break;
        }
    }

    if(flag == 1) {
        printf("Scalar");
    } else {
        printf("Not Scalar");
    }

    return 0;
}