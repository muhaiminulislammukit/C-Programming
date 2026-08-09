#include <stdio.h>

int main() {
    
    int T ;
    scanf ("%d", &T);

    for ( int cs = 0 ; cs < T ; cs++ ){

        int N;
         scanf ( "%d", &N);

         long long fact = 1;

         for ( int i = 1 ; i <= N ; i++ ){
             fact *= i;
         }

         printf("%lld\n", fact);

    }


    
 
    return 0;
}