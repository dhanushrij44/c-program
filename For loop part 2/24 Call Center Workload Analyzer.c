#include <stdio.h>

int main() {
    int n, calls;
    int total = 0, overload = 0;

    scanf("%d", &n);

    for(int i = 0; i < n; i++) {
        scanf("%d", &calls);
        total += calls;

        if(calls > 40) {
            overload++;
        }
    }

    printf("Total Calls: %d\n", total);
    printf("Overloaded Hours: %d", overload);

    return 0;
}


