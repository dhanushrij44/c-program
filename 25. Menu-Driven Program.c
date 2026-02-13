#include <stdio.h>

int main() {
    int choice, a, b;


    printf("1. Sum\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("5. Exit\n");

    printf("Enter your choice: ");
    scanf("%d", &choice);

    if(choice >= 1 && choice <= 4) {
        printf("Enter two numbers: ");
        scanf("%d %d", &a, &b);
    }

    switch(choice) {
        case 1:
            printf("Sum = %d", a + b);
            break;

        case 2:
            printf("Difference = %d", a - b);
            break;

        case 3:
            printf("Product = %d", a * b);
            break;

        case 4:
            if(b != 0)
                printf("Division = %d", a / b);
            else
                printf("Cannot divide by zero");
            break;

        case 5:
            printf("Exiting Program...");
            break;

        default:
            printf("Invalid Choice");
    }

    return 0;
}
