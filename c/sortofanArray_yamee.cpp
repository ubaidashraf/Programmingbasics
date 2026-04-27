#include<stdio.h>
int main(){
int a[5] ,i,n,temp;

printf("Enter the elements: ");

for(i=0;i<5;i++)
{

scanf("%d", &a[i]);
}
for (i=0;i<5;i++)
{
    for(n=i+1;n<5;n++)
    {
        if( a[i]> a[n])
        {
            temp=a[i];
            a[i]=a[n];
            a[n]= temp;
        }
    }
  }
    printf("elements of array: ");

for(i=0;i<5;i++)
{

printf("%d", a[i]);
}
return 0;


}