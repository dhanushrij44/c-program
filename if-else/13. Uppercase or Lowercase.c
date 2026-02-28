#include<stdio.h>
int main() {
	char c;
	printf("Enter an alphabet : ");
	scanf("%c",&c);
	
	
	if(c>='a' && c<='z')
    {
      printf("lowercase letter ");
    }
    else if(c>='A' && c<='Z')
    {
      printf("Uppercase letter ");
    }
    else
    {
        printf("Not an alphabet");
    }
	return 0;
}