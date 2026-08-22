#include <stdio.h>

int main() {
     
    int a = 20;
    int *b = &a;

    printf("%d\n", a);
   
      *b = 40;

      int val = *b;
     
    printf("%d\n", a);
    
 
    return 0;
}