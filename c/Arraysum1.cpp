#include<stdio.h>
int main() { 
    
    int numArray[] = {5,6,8,3,10,14};
    int sum = 0;
    int i; 
    for(i=0;i<6;i++) {
        sum  = sum + numArray[i];
    }
    printf("Sum of digits of an array is : %d",sum);
   
    return 0;
    
}