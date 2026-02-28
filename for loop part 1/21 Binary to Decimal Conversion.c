#include <stdio.h>

int main() {
    int n, decimal = 0, base = 1, remainder;

    scanf("%d", &n);

    for(int i = n; i > 0; i = i / 10) {
        remainder = n % 10;
        decimal = decimal + remainder * base;
        base = base * 2;
        n = n / 10;
    }

    printf("%d", decimal);

    return 0;
}
