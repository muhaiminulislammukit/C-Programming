#include <stdio.h>
void add(int a, int b){
     
     printf("Inside function:%p %p\n ",&a, &b);

    int temp = a;
     a = b;
     b = temp;
}
int main() {
    
    int a = 5; 
    int b = 6;
    
    printf("%p %p\n ", &a, &b);

    add ( a, b);

    printf("%d %d", a, b);
 
    return 0;
}