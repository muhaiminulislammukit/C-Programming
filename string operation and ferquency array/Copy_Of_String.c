#include <stdio.h>
#include <string.h>

int main() {
     
     char a [10];

     char b [20]= "abcdefgh"; 

     int length = strlen(b);

     for( int i = 0; i < length;i++){

        a[i] =b[i];
     }

     a[length] = '\0';

      printf("%s %s",a ,b);


     /*for( int i = 0; b[i] != '\0';i++){

        a[i] =b[i];
     }  */

 
    return 0;
}