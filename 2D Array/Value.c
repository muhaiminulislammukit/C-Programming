#include <stdio.h>

int main() {
        //declaration , initialization  and access 2D array;

    
    int arr[3][5];

    for (int i = 0; i < 3; i++){

        for (int j = 0 ; j < 5; j++){
    //prient array value.
            printf ( " i = %d,j = %d ,value = %d ||" , i , j , arr[i][j]);
        }
        printf("\n");
    }
    
 
    return 0;
}