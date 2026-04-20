#include<stdio.h>
int main() {

    //Print numbers upto 100
    int num=1,i;
    printf("\n\n************Print using While loop****************\n\n");
    while (num <= 100) {
        printf("%d ", num);
        num = num +1;
        //num++;
    } 
    printf("\n\n************Print using For loop****************\nzn");
    for(i=1; i<=100; i++) {
        printf("%d ", i);
    }
    return 0;
}