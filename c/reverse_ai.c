#include <stdio.h>
int main() {
    int n , remainder , rev;
    rev = 0;
    printf("Enter a number");
    scanf("%d" ,&n);
    while (n !=0) {
        remainder = n% 10;
        rev = rev * 10 + remainder ;
        n = n / 10 ;
    }
    printf("reverse is %d" ,rev) ;
    return 0;
}