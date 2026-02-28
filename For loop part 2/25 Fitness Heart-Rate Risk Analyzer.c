#include <stdio.h>

int main() {
    int n, rate;
    int max = 0, danger = 0;

    scanf("%d", &n);

    for(int i = 0; i < n; i++) {
        scanf("%d", &rate);

        if(rate > max) {
            max = rate;
        }

        if(rate > 140) {
            danger++;
        }
    }

    printf("Max Heart Rate: %d\n", max);
    printf("Danger Readings: %d", danger);

    return 0;
}



