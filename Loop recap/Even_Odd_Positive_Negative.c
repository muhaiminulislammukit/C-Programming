#include <stdio.h>

int main() {
    
 int N;
 scanf("%d",&N );

      int evencount = 0 , oddcount = 0,  positivecount =0, negativecount = 0;
      
   for (  int i =0; i <N ; i++){
        int num;
        scanf("%d",&num);
        if (num % 2 == 0){
            evencount++;
        }
        else{
            oddcount++;
        }

        if (num > 0){
            positivecount++;
        }
        else if (num < 0){
            negativecount++;
        }
    
        
   }
 
    printf("Even Count: %d\n", evencount);
    printf("Odd Count: %d\n", oddcount);
    printf("Positive Count: %d\n", positivecount);
    printf("Negative Count: %d\n", negativecount);

    return 0;
}