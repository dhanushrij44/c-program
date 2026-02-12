#include <stdio.h>
int main (){
    int a;
    
     printf("enter a number :");
     scanf("%d", &a);
     
    if(a>0)
    {
        printf("positive");
        
    }
    else if(a==0)
    {
        printf("Neither positive nor negative");
    }
    else
    {
        printf("negative");
    }
}
