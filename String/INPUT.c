#include <stdio.h>
    
//char str [100000];   // global string  declaration.

int main() {
    
      char str [50];       

    //   scanf("%[^\n]s", str);input type 

    //   gets(str);// ata use korle  onk complaier aita support  kore na  . aita use kore string input neoye jay 

      fgets(str,sizeof(str),stdin);//fgets ar jonno  ai vabe string   ar input neite hobe .fgets (string ar name ,sizeof (string ar name)stdin);
       
    //puts(str); //this is  string  print   but ist depricated.


    //   printf("%s", str);   
      fputs(str , stdout);

      
     
    
    return 0;
}