#include <stdio.h>

int main() {
    int battery, N, drain;

    scanf("%d", &battery);
    scanf("%d", &N);

    for(int i = 0; i < N; i++) {
        scanf("%d", &drain);
        battery -= drain;
    }

    printf("Remaining Battery : %d%%", battery);

    return 0;
}
