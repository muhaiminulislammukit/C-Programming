#include <stdio.h>

void swap(int *x, int *y)
{
  
    printf("Function:%p %p\n",x ,y);


    int temp = *x;
    *x = *y;
    *y = temp;
}

int main()
{
    int a = 111;
    int b = 222;

    swap(&a, &b);

    printf("Main:%p %p\n",&a ,&b);

    printf("%d %d\n", a, b);

    return 0;
}