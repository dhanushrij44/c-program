#include<stdio.h>
int main(){ 
        char c;
        scanf("%c",&c);
         
        if(c>='a' && c<='z'||c>='A' && c<='Z')
        {
            printf("Alphabet");
        }
        else if(c>='0' && c<='9')
        {
            printf("digit");
        }
        else
        {
            printf("special character");
        }
    return 0;
}