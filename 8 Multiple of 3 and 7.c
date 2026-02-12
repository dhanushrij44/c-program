#include<stdio.h>
int main(){
    int a;
    printf("Enter a number: ");
    scanf("%d",&a);
    
    if(a%3==0 && a%7==0)
    {
        printf("multiple of both 3 and 7");
        
    }
    else
    {
        printf("not a multiple of both 3 and 7");
    }
    return 0;
}