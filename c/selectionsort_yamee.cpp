#include <stdio.h>

int main() {
    int a[5], i, j, min, temp;

    // 1. Input loop
    printf("Enter 5 elements: ");
    for(i = 0; i < 5; i++) {
        scanf("%d", &a[i]);
    }

    for(i = 0; i < 4; i++) {
        min = i; 
        
        for(j = i + 1; j < 5; j++) {
            if(a[j] < a[min]) {
                min = j; 
            }
        }

        
        temp = a[min];
        a[min] = a[i];
        a[i] = temp;
    }

    printf("Elements of array: ");
    for(i = 0; i < 5; i++) {
        printf("%d ", a[i]);
    }

    return 0;
}