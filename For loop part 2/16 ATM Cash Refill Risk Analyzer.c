#include <stdio.h>

int main() {
    int initialCash, N, withdraw;
    int riskCount = 0;

    scanf("%d", &initialCash);
    scanf("%d", &N);

    for(int i = 0; i < N; i++) {
        scanf("%d", &withdraw);
        initialCash -= withdraw;

        if(initialCash < 5000) {
            riskCount++;
        }
    }

    printf("Remaining Cash: %d\n", initialCash);
    printf("Risk Count: %d", riskCount);

    return 0;
}

