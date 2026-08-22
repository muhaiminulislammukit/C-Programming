#include <stdio.h>

int main() {
    
    int a = 5;

    int *x = &a;

    int **y = &x;  // its pointer to pointer 

    // printf("%d %d %d\n", a, *x, **y); //3 ta  value berkorce
    // printf("%d %d \n",y , &x);   //aikane  y and x ar address  berkorce
    // printf("%d %d \n", *y , &a); //x and y ar address berkorce
    //    printf("%d %d \n", **y , &a);  // aikane  **y address and a ar value berkorce
       printf("%d %d \n", **y , *x); //akon  y and x ar value berkorce 
    return 0;
}