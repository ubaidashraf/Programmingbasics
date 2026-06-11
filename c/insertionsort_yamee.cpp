#include <stdio.h>

int main() {
    int a[5], i, j, temp;
    printf("Enter 5 elements: ");
    for(i = 0; i < 5; i++) {
        scanf("%d", &a[i]);
    }

    for(i = 1; i < 5; i++) {
        temp = a[i]; 
        j = i - 1; 

        while(j >= 0 && a[j] > temp) {
            a[j + 1] = a[j]; 
            j--; 
        }
           a[j + 1] = temp; 
    }
    
    printf("Elements of array: ");
    for(i = 0; i < 5; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");

    return 0;
}