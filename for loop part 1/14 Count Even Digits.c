#include <stdio.h>

int main() {
    int n, digit, count = 0, i;

    scanf("%d", &n);

    for(i = n; i > 0; i = i / 10) {
        digit = i % 10;

        if(digit % 2 == 0) {
            count++;
        }
    }

    printf("%d", count);

    return 0;
}
