#include<stdio.h>
int main (){
int Num,n,r,count=0;
 printf("Enter any number:");
 scanf("%d", &Num);
n=Num;
while(Num>0){

r=Num%10;
count=(r*r*r)+count;
Num= Num/10;
}
if (count==n)
printf("The Given Number Is An Armstrom Number");
else
printf("The Given Number Is Not An Armstrom Number");


return 0;    
}