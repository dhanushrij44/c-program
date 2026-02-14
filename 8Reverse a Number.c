#include <stdio.h>

int main() {
    int N, rev = 0, i;
    scanf("%d", &N);

    for(i = N; i > 0; i = i / 10) {
        rev = rev * 10 + (i % 10);
    }

    printf("%d", rev);
    return 0;
}
