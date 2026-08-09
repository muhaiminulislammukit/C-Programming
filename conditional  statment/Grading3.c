#include <stdio.h>

int main() {
    
    int marks;

    scanf("%d",&marks);
     
      if(marks >=33 && marks <=100 ){
         printf("You have pass the exam\n");

           if (marks >=80 && marks <=100 ){
                printf ("You have got A+ Grade\n");
                if(marks>=90){
                    printf ("congratulations! you have got scalarshp\n");
                }   
            }
            else if(marks >=70 && marks <79 ){
                printf ("You have got A Grade\n");   
            }
            else if(marks >=60 && marks <69 ){
                printf ("You have got A- Grade\n");   
            }
            else if(marks >=50 && marks <59 ){
                printf ("You have got B Grade\n");   
            }
            else if(marks >=40 && marks <49 ){
                printf ("You have got C Grade\n");   
            }
            else if(marks >=33 && marks <39 ){
                printf ("You have got D Grade\n");   
            }
      }

    
    else if (marks <0 || marks >100 ){
        printf ("you have got F Grade\n");
        printf ("You have fail the  exam.please try again\n");   
    }
    else{
        printf ("Invalide Number\n");   
    }
    return 0;
}