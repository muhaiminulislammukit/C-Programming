#include <stdio.h>

int main() {
    int a = 3 , b = 4;

    int *x = &a , *y = &b;

    int  sum = *x + *y;
    printf("%d\n", sum);
    
 
    return 0;
}