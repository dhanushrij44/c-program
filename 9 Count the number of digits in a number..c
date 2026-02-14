#include <stdio.h>

int main() {
    int N, i, count = 0;
    scanf("%d", &N);

    for(i = N; i > 0; i = i / 10) {
        count++;
    }

    printf("%d", count);
    return 0;
}

