#include <stdio.h>
#include <string.h>

int main() {
    
    char a[20] = "Hello ";
    char b[20] = "world?";
    
    int len_a = strlen(a);
    int len_b = strlen(b);

    int length = len_a + len_b;

    for ( int i = len_a ,j =0 ; i< length; i++ , j++){ //j < len_b; aitao use kora jay
        //  a[i] = b[j];  aita  a lenth ar jonno use korte hobe .
         b[i] = a[j];
    }
    
    // a[length] = '\0'; a length ar sathe martch korte 

    b[length] = '\0';

    printf("%s\n %s",a ,b);
 
    return 0;
}