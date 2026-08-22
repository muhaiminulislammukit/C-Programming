#include <stdio.h>

       int a , b;

int add ()
{

    int sum = a + b;

  printf("Function\n");

    return sum;
}

int main() {

    // int result = add( 20 , 45);
    
    printf("Before\n");
     a = 10, b = 20;
    printf(" The result:%d\n", add ());
    a =100 , b =200;
    printf(" The result:%d\n", add ());
    a = 1000, b = 2000;
    printf(" The result:%d\n", add ());

    printf("After call\n");
    


    return 0;
}