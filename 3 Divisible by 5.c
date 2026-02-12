#include <stdio.h>
int main (){
    int a;
    
     printf("enter a number :");
     scanf("%d", &a);
     
    if(a % 5 == 0)
    {
        printf(" It is divisible by 5");
    }
    else
    {
        printf("It is not divisible not by 5");
    }
    
    
 return 0;   
}
