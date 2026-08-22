#include <stdio.h>
int add(){
    int a, b;
    scanf("%d %d", &a, &b);

     printf("Function\n");

    int sum  = a + b;

    return sum;
}
int main() {
    
    printf("Befor");

    printf("%d\n",add());

    printf("%d\n",add());

    printf("After\n");
 
    return 0;
}