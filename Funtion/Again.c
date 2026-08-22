#include <stdio.h>

/*
return_type function_name (parameter)
{
  statements;

  return result;
}
*/

int add (int a, int b)
{
    int sum = a + b;
  printf("Function\n");
    return sum;
}

int main() {

    // int result = add( 20 , 45);
    
    printf("Before\n");
    
    //   printf(" The result:%d", result);
    printf(" The result:%d\n", add ( 20 , 45));

    printf(" The result:%d\n", add ( 200 , 457));

    printf("After call\n");
    


    return 0;
}