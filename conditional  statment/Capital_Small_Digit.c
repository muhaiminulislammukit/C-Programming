#include <stdio.h>

int main() {
    
     char ch;
        scanf("%c",&ch);

        if (ch>='0'&& ch<='9'){
            printf ("is desigt\n");

        }
        else {
            printf("is alpha\n");
            
              if (ch>='A' && ch<='Z'){
                printf ("is capital letter\n");}
                else{
                    printf ("is small letter\n");
                }
        }

    
 
    return 0;
}