#include <stdio.h>
#include <string.h>

int main()
{

    char a[30] = "Hello";

    char b[30] = "abcdefgh";

    printf("%s %s \n", a, b);

    strcpy(a ,b);

    printf("%s %s \n", a, b);

    return 0;
}