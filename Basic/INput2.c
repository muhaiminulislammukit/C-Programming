#include <stdio.h>

int main() {
 // This using for double input and output with 4 decimal places;
    double d;
    scanf("%lf", &d);


printf ("%.4lf", d);


 /*
     float f;
     scanf("%f", &f);
     printf ("%.34f", f);
*/


/*
   // int a,b;
   // char ch;
    //short int c;
    //scanf("%d %d  %hd", &a, &b,  &c);


//i am using space before %c to avoid any issue with mewline character.
//getchar();
//scanf(" \n%c",&ch);
     
   // printf("a = %d b=  %d  c= %d  ch= %c", a, b, ch, c);
 */
    return 0;
}