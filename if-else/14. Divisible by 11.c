#include<stdio.h>
int main() {
int a;
	printf("Enter a number : ");
	scanf("%d",&a);
	
	
	if(a%11==0)
    {
      printf("%d Divisible by 11",a);
    }
    
    else
    {
        printf("%d Not Divisible by 11 ",a);
    }
	return 0;
}