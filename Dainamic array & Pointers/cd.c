#include <stdio.h>
#include <stdlib.h>

int main() {
    
    int *arr = (int *)calloc(5 * sizeof(int), 1);
    
    // for( int  i = 0; i < 5;i++){
    //     arr[i] = i + 1;
         
    // }
      
    for( int i = 0; i < 5; i++){
        printf("%d " ,arr[i]);
    }
          
       printf("\n");

    return 0;
}