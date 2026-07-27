#include <stdio.h>

int main() {
       
    int N;
    scanf("%d",&N);

    int a[N+5];
    for(int i=0;i<N;i++){
        scanf("%d",&a[i]);
    }

    int min =a[0];
    for (int i=0; i<N;i++){
        if(a[i]<min ){
            min=a[i];
        }
    }
     
    // printf("%d\n ",min);

    int cnt =0;

    for (int i=0; i<N;i++){
        if(a[i]== min){
            cnt++;
        }
    }
 
    // printf("%d\n",cnt);
     
    if (cnt % 2 ==0){
        printf("Unlucky\n");
    }
    else{
        printf("Lucky");
    }



    return 0;
}