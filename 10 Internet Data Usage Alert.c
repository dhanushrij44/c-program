#include <stdio.h>

int main() {
    int n, i;
    int usage;
    int total = 0;
    int highDays = 0;

    scanf("%d", &n);

    for(i = 1; i <= n; i++) {
        scanf("%d", &usage);
        total = total + usage;

        if(usage > 2) {
            highDays++;
        }
    }

    printf("Total Data: %d\n", total);
    printf("High Usage Days: %d", highDays);

    return 0;
}
