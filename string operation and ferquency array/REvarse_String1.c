#include <stdio.h>

int main() {
    
   char str [30] = "abcd";
   
   int len = strlen(str);

   for (int i = 0 , j = len -1;i <=j; i++,j--){

    char temp = str [i];
    str[i] = str[j];  //swap
    str[j] = temp;

   }

   printf("%s", str);
 
    return 0;
}