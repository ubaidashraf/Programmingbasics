#include <stdio.h>
int main() {
    int arr[6] = {1,2,3,4,5,6};
    int i; 
    int evenSum =  0,      oddSum = 0;
    for(i = 0; i < 6; i++) {
    if(arr[i] % 2 == 0) {
    evenSum = evenSum + arr[i];
     } else {
    oddSum = oddSum + arr[i];
     }
    }
    printf ("Sum of even numbers -> %d", evenSum);
    printf ("sum of odd numbers -> %d", oddSum);
    return 0;
}