#include <stdio.h>

int main() {
    /*
    for  ( int i = 100 ; i <=300; i++){

            printf("checking %d\n", i);
            if (i % 2  ==0 && i % 3 ==0 && i % 5 == 0){
                 printf ("%d  is the number\n", i);
                  break;
            }
    }   
            */

             for (int i = 1; i <= 10; i++){
                    printf("%d\n", i);
                    printf ("line  1\n");
                    printf ("line  2\n");

                    if (i == 5){
                        break;
                    }
                    printf ("line  3\n");
                    printf ("line  4\n");
             }
 
    return 0;
}