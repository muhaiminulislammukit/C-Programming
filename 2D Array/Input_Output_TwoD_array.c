#include <stdio.h>

int main() {
    
    int n , m;
    scanf("%d%d", &n, &m);

    int a [n + 5][m +5];
    
    for (int i = 0; i <n; i++){
        for (int  j = 0; j < m; j++){
            scanf("%d" , &a[i][j]);
        }
    }

    a[1][2] = 34;
    a[0][1] =800; 
    for ( int i = 0; i < n; i++){

        for (int j =0; j < m; j++){
            printf( "%d ", a[i][j]);
        }
           
        printf("\n");
    }
 
    return 0;
}