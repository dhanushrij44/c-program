#include<stdio.h>
int main() {
	int a;
	printf("Enter the mark : ");
	scanf("%d",&a);

	if( a>=90 && a<=100)
	{
		printf(" Grade 'A' ");
	}
	else if(a<=89 && a>=75)
	{
		printf(" Grade 'B' ");
	}
	else if (a<=74 && a>=40)
	{
		printf(" Grade 'C' ");
	}
	else
	{
		printf(" 'FAIL' ");
	}
	return 0;
}