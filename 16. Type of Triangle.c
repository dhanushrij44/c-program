#include<stdio.h>
int main() {
int a ,b ,c;
	
	scanf("%d %d %d",&a , &b , &c);
	
	
	if(a==b&&c==b&&a>0&&b>0&&c>0)
    {
      printf("Equilateral triangle");
    }
    
    else
    {
        printf(" Not an Equilateral triangle");
    }
	return 0;
}