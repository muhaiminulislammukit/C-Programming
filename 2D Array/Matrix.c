#include <stdio.h>
#include <math.h>

int main() {
   
    int n;
    scanf("%d",&n);

    int m[n][n];

    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            scanf("%d",&m[i][j]);
        }
    }

    int main_diagonal = 0 , sec_diagonal = 0;
 
    for ( int i = 0; i < n; i++){
        for ( int j = 0; j < n; j++){
            if ( i == j){
                main_diagonal += m[i][j];
            }
            if ( i + j == n - 1){
                sec_diagonal += m[i][j];
            }
        }
    }
    
     int diff = abs(main_diagonal - sec_diagonal);

    printf("%d",diff);
    
    return 0;
}