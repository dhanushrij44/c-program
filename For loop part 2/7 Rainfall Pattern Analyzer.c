#include <stdio.h>

int main() {
    int n,i, rain;
    int total = 0, heavy = 0;

    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        scanf("%d", &rain);
        total =total+rain;

        if(rain > 50) {
            heavy++;
        }
    }

    printf("Total Rainfall: %d\n", total);
    printf("Heavy Rain Days: %d", heavy);

    return 0;
}
