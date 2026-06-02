#include <stdio.h>

float add(float x, float y) {
    return x + y;
}
float subtract(float a, float b) {
    return a - b;
}
float multiply(float a, float b) {
    return a * b;   
}
 
float divide(float a, float b) {
    if (b == 0) {
        printf("Error: Division by zero\n");
        return 0;
    } else {
        return a / b;
    }
}
void showMenu() {
    printf("1.Add  2.Subtract  3.Multiply  4.Divide\n");
}


int main() {
    int choice;
    float a, b;
    char x ;
    showMenu();
    printf("Enter choice: ");
    scanf("%d", &choice);

    printf("Enter two numbers: ");
    scanf("%f %f", &a, &b);

    switch (choice) {
        case 1:
             printf("Result = %.2f\n", add(a, b)); 
             break;
        case 2: 
             printf("Result = %.2f\n", subtract(a, b));
             break;
        case 3: 
            printf("Result = %.2f\n", multiply(a, b)); 
            break;
        case 4: 
            printf("Result = %.2f\n", divide(a, b)); 
            break;
        default: printf("Invalid choice\n");
    }

    return 0;
}