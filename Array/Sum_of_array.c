#include <stdio.h>

int main() {
    
   int n;
   scanf("%d", &n);

   if (n == 0) {
       printf("Invalid input\n");
       return 0;
   }

   int a[n];

   for (int i = 0; i < n; i++){
       scanf("%d", &a[i]);
   } 

   int sum = 0;

   for (int i = 0; i < n; i++){
       sum += a[i];
   }

   printf("%d\n", sum);

   float avg = (float)sum / n;
   printf("%.2f\n", avg);

   return 0;
}