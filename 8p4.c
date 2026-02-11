#include <stdio.h>
int main() {
    int a, b;
    scanf("%d %d", &a, &b);


int x =a;
    a /= b;
   x %= b;

    printf("%d %d", a, x);

    return 0;
}
