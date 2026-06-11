#include <stdio.h>
int main()
{
    int num, copy, digit, sum = 0;
    printf("Enter a number-");
    scanf("%d", &num);
  copy=num;
   while(num > 0) {
  digit = num % 10;
  sum = sum +(digit*digit*digit) ;
  num = num / 10;
}
 if (copy == sum)
printf("%d is an armstrong number",copy);
else
 printf("%d is not an aarmstrong number",copy);
return 0;
}