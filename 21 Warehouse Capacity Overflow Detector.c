#include <stdio.h>

int main() {
    int capacity, n, items;
    int overflow = 0;

    scanf("%d", &capacity);
    scanf("%d", &n);

    for(int i = 0; i < n; i++) {
        scanf("%d", &items);
        capacity = capacity - items;

        if(capacity < 0) {
            overflow++;
        }
    }

    printf("Remaining Capacity: %d\n", capacity);
    printf("Overflow Days: %d", overflow);

    return 0;
}
