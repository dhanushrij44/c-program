#include <stdio.h>

int main() {
    int n,i,power,temp, original, remainder;
    int sum = 0, digits = 0;

    scanf("%d", &n);
    original = n;

    
    for(temp = n; temp > 0; temp = temp / 10) {
        digits++;
    }

   
    for(temp = n; temp > 0; temp = temp / 10) {

        remainder = temp % 10;

       power = 1;

       
        for( i = 1; i <= digits; i++) {
            power = power * remainder;
        }

        sum = sum + power;
    }

    if(sum == original)
        printf("Yes");
    else
        printf("No");

    return 0;
}
