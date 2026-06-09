#include <stdio.h>

void bubble_sort(int arr[], int len) {

    for(int i= 0; i < len; i++){
        for(j = 0; j < n-1; j++) {    
            if(arr[j] > arr[j+1]) {
                int temp = arr[j];
                arr[j] = arr[j+1];   
                arr[j+1] = temp;
            }
        }   
    }
}

int main() {
    int arr[] =[4,3,2,1];
    int len = sizeof(arr) / sizeof(arr[0]);

    bubble_sort(arr,len);
    for(int i=0; i< n ; i++) {
        printf("%d ", arr[i])''
    }
    return 0;
}
