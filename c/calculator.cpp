#include <stdio.h>

int main() {
    int choice;
    float a, b, result;

    printf("1.Add  2.Subtract  3.Multiply  4.Divide\n");
    printf("Enter choice: ");
    scanf("%d", &choice);

    printf("Enter two numbers: ");
    scanf("%f %f", &a, &b);

    if (choice == 1) {
        result = a + b;
        printf("Result = %.2f\n", result);
    } else if (choice == 2) {
        result = a - b;
        printf("Result = %.2f\n", result);
    } else if (choice == 3) {
        result = a * b;
        printf("Result = %.2f\n", result);
    } else if (choice == 4) {
        if (b != 0) {
            result = a / b;
            printf("Result = %.2f\n", result);
        } else {
            printf("Error: Division by zero\n");
        }
    } else {
        printf("Invalid choice\n");
    }

    return 0;
}