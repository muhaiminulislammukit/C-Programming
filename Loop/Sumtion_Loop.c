#include <stdio.h>

int main() {
    
    int n = 10;
    int sum = 0;
    for  ( int i = 1; i <=n; i++ ){
        printf ("%d + %d = ", sum ,i);
        sum +=i;
        printf ("%d\n", sum);
    }

    return 0;
}