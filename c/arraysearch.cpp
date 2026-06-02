#include<stdio.h>
int main() {
int num;
int i;
int arr[] = {-4,-2,1,4,5,6,7,88,92,10};

printf("Enter the number to search: ");
scanf("%d", &num);
//92

for(i=0; i<10; i++) {
    if(arr[i] == num) {

        
        printf("Number found at index: %d", i);
        break;
    }
}

return 0;
}