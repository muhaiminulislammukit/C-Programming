#include <stdio.h>

int main() {

    int N;
    scanf("%d", &N);

    int a[N+5];

    for(int i=0; i<N; i++){
        scanf("%d", &a[i]);
    }

    int min = a[0], max = a[0];
    int min_pos = 0, max_pos = 0;


    for(int i=1; i<N; i++){

        if(a[i] < min){
            min = a[i];
            min_pos = i;
        }

        if(a[i] > max){
            max = a[i];
            max_pos = i;
        }
    }


    int temp = a[min_pos];
    a[min_pos] = a[max_pos];
    a[max_pos] = temp;


    for(int i=0; i<N; i++){
        printf("%d ", a[i]);
    }


    return 0;
}