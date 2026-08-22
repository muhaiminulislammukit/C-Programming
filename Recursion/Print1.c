#include <stdio.h>
void fun(int x, int n){

    if( x > n){
        return;
    }


    printf("%d\n ", x);
    fun(x + 1 ,n);
}
int main() {
    

    fun(1 , 6);
 
    return 0;
}