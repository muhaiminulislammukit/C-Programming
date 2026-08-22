#include <stdio.h>
void  add( int a, int b)
{
    scanf("%d %d", &a, &b);

     printf("Function\n");

    int sum  = a + b;

    printf("%d\n",sum);

    return ;
}
int main() {
     
    int a ,b;
    scanf("%d %d", &a, &b);

    add(a ,b);

 
    return 0;
}