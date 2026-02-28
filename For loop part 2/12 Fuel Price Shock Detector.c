#include <stdio.h>

int main() {
    int n, i;
    int price;
    int highest;
    int highDays = 0;

    scanf("%d", &n);

    scanf("%d", &highest);   // first value as initial max

    if(highest > 100) {
        highDays++;
    }

    for(i = 2; i <= n; i++) {
        scanf("%d", &price);

        if(price > highest) {
            highest = price;
        }

        if(price > 100) {
            highDays++;
        }
    }

    printf("Highest Price: %d\n", highest);
    printf("High Price Days: %d", highDays);

    return 0;
}

