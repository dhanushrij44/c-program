#include<stdio.h>
int main(){ 
    int lowercase;
    int uppercase;
    char c;
    
    printf("Enter a letter : ");
    scanf("%c", &c);
    lowercase = (c =='a'||c =='e'||c =='i'||c =='o'||c =='u');
    uppercase = (c =='A'||c =='E'||c =='I'||c =='O'||c =='U');
    
    if(lowercase || uppercase)
    {
        printf("vowel");
    }
    else
    {
        printf("consonant");
    }
    return 0;
}