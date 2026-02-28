#include <stdio.h>

int main() {
    int n,i, loss;
    int total = 0, high = 0;

    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        scanf("%d", &loss);
        total = total+loss;

        if(loss > 100) {
            high++;
        }
    }

    printf("Total Loss: %d\n", total);
    printf("High Loss Days: %d", high);

    return 0;
}
