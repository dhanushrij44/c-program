#include <stdio.h>

int main() {
    int n, i;
    int patients;
    int total = 0;
    int overcrowded = 0;

    scanf("%d", &n);

    for(i = 1; i <= n; i++) {
        scanf("%d", &patients);
        total = total + patients;

        if(patients > 100) {
            overcrowded++;
        }
    }

    printf("Total Patients: %d\n", total);
    printf("Overcrowded Days: %d", overcrowded);

    return 0;
}
