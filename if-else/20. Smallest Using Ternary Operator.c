#include<stdio.h>
int main(){
int a,b ,smallest;
    printf("enter a numbers: ");
    scanf("%d %d",&a,&b);
    
   smallest=(a<b) ? a : b;
   printf("smallest: %d",smallest);
    
    return 0;
}
