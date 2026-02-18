#include <stdio.h>

int main() {
    int n, i;
    int marks, sum = 0;
    int failed = 0;
    int average;

    scanf("%d", &n);

    for(i = 1; i <= n; i++) {
        scanf("%d", &marks);
        sum = sum + marks;

        if(marks < 40) {
            failed++;
        }
    }

    average = sum / n;

    printf("Average Score: %d\n", average);
    printf("Failed Subjects: %d", failed);

    return 0;
}
