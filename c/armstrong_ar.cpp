#include <stdio.h>
#include <math.h>

int main() {
    int num, originalNum, remainder, n = 0;
    double result = 0.0;

    printf("Enter an integer: ");
    scanf("%d", &num);

    originalNum = num;

    // 1. Count the number of digits
    int temp = num;
    while (temp != 0) {
        temp /= 10;
        ++n;
    }

    temp = num;

    // 2. Calculate the sum of powers of digits
    while (temp != 0) {
        remainder = temp % 10;
        result += pow(remainder, n);
        temp /= 10;
    }

    // 3. Check if the result matches the original number
    // Use a small epsilon for double comparison or cast to int
    if ((int)result == num)
        printf("%d is an Armstrong number.\n", num);
    else
        printf("%d is not an Armstrong number.\n", num);

    return 0;
}
