#include <stdio.h>

int main() {
    float r, area;

    printf("Enter the value of r: ");
    scanf("%f", &r);

    area = 3.14 * r * r;

    printf("The area of circle is %.2f", area);

    return 0;
}