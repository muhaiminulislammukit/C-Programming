#include <stdio.h>

int main() {
    
  int a, b, c;
  char s , q;
  scanf("%d %d %d %c %c", &a, &b, &c, &s, &q);
   

   int result;
    
    if (s == '+'){
        result = a + b ;
        
    }
 
    else if ( s == ' -'){
        result = a - b; 

    }

    else if ( s == ' *'){
         result = a * b; 

    }
 
    if (result == c ){
        printf ("Yes\n");
    }
    else {
       printf("%d\n", result);
    }
    
    return 0;
}