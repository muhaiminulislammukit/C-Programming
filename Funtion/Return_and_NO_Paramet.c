#include <stdio.h>

int add ()
{
       int a =10 , b =20;//function vitore value nile next a update korle  previous data result ar kaj korbe

    int sum = a + b;

  printf("Function\n");
    return sum;
}

int main() {

    // int result = add( 20 , 45);
    
    printf("Before\n");
    
    printf(" The result:%d\n", add ());
    printf(" The result:%d\n", add ());
    printf(" The result:%d\n", add ());

    printf("After call\n");
    


    return 0;
}