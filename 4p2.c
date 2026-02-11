#include <stdio.h>

int main() {
    int a, b, c, d;
    int diff1, diff2;

    scanf("%d %d", &a, &b);
    scanf("%d %d", &c, &d);

    diff1 = a - b;
    diff2 = c - d;

    printf("%d\n", diff1);
    printf("%d", diff2);

    return 0;
}
