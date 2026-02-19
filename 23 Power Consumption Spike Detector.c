#include <stdio.h>

int main() {
    int n, units;
    int total = 0, spike = 0;

    scanf("%d", &n);

    for(int i = 0; i < n; i++) {
        scanf("%d", &units);
        total += units;

        if(units > 5) {
            spike++;
        }
    }

    printf("Total Units: %d\n", total);
    printf("Spike Hours: %d", spike);

    return 0;
}

