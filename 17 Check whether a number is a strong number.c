#include <stdio.h>

int main() {
    int N, temp, digit;
    int sum = 0;
    int i, fact;

    scanf("%d", &N);

    for(temp = N; temp > 0; temp = temp / 10) {

        digit = temp % 10;   
        fact = 1;

        for(i = 1; i <= digit; i++) {
            fact = fact * i;   
        }

        sum = sum + fact;  
    }

    if(sum == N)
        printf("Yes");
    else
        printf("No");

    return 0;
}
