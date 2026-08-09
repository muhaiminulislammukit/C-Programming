#include <stdio.h>

int main() {
  //Example of infinite loops 1   
    for ( ; ; )
{
    printf ("This is an infinite loop.\n");

}    
   //Example of infinite loops 2   

  for ( int i=1 ;i<=0 ; )
{
    printf ("This is an infinite loop.\n");

} 
  //Example of infinite loops 3   

int i =1;
while (2){
    printf ("This is an infiniteloop.\n");
}
    return 0;
}