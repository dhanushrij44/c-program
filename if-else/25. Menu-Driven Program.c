#include <stdio.h>

int main() {
    int choice, a, b;

    printf("Give your choice : ");
    scanf("%d", &choice);

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

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

        default:
            printf("Invalid Choice");
    }

    return 0;
}
