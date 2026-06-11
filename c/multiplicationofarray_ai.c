#include <stdio.h>
int main() {
    int arr [5] = {1,2,3,4,5};
 int i; 
  int product = 1;
    for(i = 0; i < 5; i++) 
    product = product *arr[i];

    printf("Product of array elements is: %d\n", product);
    return 0;
}