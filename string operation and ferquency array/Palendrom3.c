#include <stdio.h>

int main() {
    
   char str [30] = "abcd";

   char str2 [30]   ;
   
   int len = strlen(str2 ,str);

   for (int i = 0 , j = len -1;i <=j; i++,j--){

    char temp = str [i];
    str[i] = str[j];  //swap
    str[j] = temp;

   }

   printf("%s %s", str2 , str);
 
    return 0;
}