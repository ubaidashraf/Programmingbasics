#include<stdio.h>
int main(){
int n,multi=1;

printf("Enter a number:");
scanf("%d", &n);

while(n>0) {

multi= multi*(n%10);
n= n/10;
}

printf("The multiplication of digits of the number is %d", multi);

    return 0;
}