#include <stdio.h>

void alphackeck( char c){
 
    if('a' <= c && c <= 'z'){
        printf("Lowercase\n");
    }
    else{
        printf("Upercase\n");
    }

}


int main() {
    
    alphackeck('a');

    alphackeck( 'f'); 
    return 0;
}