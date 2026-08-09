#include <stdio.h>

int main() {
    
  int a,b,c;
   scanf("%d %d %d",&a,&b,&c);
    
    if ( a <=b)
    {
        if ( a <= c)
        {
            printf("Min=%d\n",a);
        }
        else
        {
            printf("Min=%d\n",c);
        }
    }
    else
    {
        if ( b <= c)
        {
            printf("Min=%d\n",b);
        }
        else
        {
            printf("Min=%d\n",c);
        }  
    }
  
     printf ("  ");

     if ( a >=b && a >= c) 
    {
        printf("Max=%d\n",a);
    }
    else if ( b >= a && b >= c)
    {
        printf("Max=%d\n",b);
    }
    else
    {
        printf("Max=%d\n",c);
    }
    return 0;
}