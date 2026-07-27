#include <stdio.h>
#include <stdbool.h>
int main() {
    bool result;
    int a = 5, b= 6, c =7;
    result = (a<b) && (b<c);
    printf("result= %d",result);
 
    return 0;
}
//&& logical AND Operator 
//|| Logical OR Operator 
// ! Logical Not Operator
// used to combine multiple conditions
//Example:(a>b && a == c )
