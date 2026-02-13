#include<stdio.h>
int main(){
    int a;
    printf("Enter a number: ");
    scanf("%d",&a);
    
    if(a>=10 && a<=20)
    {
        printf(" Number is within range");
    }
    else
    {
        printf("Number is not within range");
    }
    return 0;
}