#include<stdio.h>
int main() {

float price[3];

printf("Enter  price1: ");
scanf("%f" , &price[0]);

printf("Enter  price2: ");
scanf("%f" , &price[1]);

printf("Enter  price3: ");
scanf("%f" , &price[2]);

printf("total price1: , %f" , price[0]+ (0.18*price[0]));
printf("total price2: , %f" , price[1]+ (0.18*price[1]));
printf("total price3: , %f" , price[2]+ (0.18*price[2]));

return 0;
}