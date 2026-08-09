#include <stdio.h>

int main() {
    
     char a[20] = "Hello ";
     char b[20] = "world? ";

    strcat( a, b);

    printf("%s \n %s", a, b);
 
    return 0;
}