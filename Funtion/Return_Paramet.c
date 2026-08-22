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

    return sum;
}

int main() {
    
    int result = add( 20 , 45);
      printf(" The result:%d", result);

    return 0;
}