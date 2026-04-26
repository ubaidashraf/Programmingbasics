#include<stdio.h>
int main() { 
    int arrayLength;
    int i;
    printf("Enter size of an  array: ");
    scanf("%d", &arrayLength);
    int numArray[arrayLength];

    printf("\nEnter elements of an array: ");

    for(i=0 ; i<arrayLength; i++){
        scanf("%d", &numArray[i]);
        if(numArray[i] <0) {
            break;
        }
    }
   
    printf("\n Array elements are : ");
    for(i=0 ; i<arrayLength; i++){
        printf("%d\t", numArray[i]);
    }
  

    return 0;
    
}