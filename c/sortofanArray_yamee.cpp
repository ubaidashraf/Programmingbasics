#include<stdio.h>
int main(){
int a[5] ,i,j,temp;

printf("Enter the elements: ");

for(i=0;i<5;i++)
{

scanf("%d", &a[i]);
}
for (i=0;i<5;i++)
{
    for(j=i+1;j<5;j++)
    {
        if( a[i]> a[j])
        {
            temp=a[i];
            a[i]=a[j];
            a[j]= temp;
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


// [5,1,4,2] 5>1, swap [1,5,4,2]    = > compare 5 with 4  5>4 = swap  [1,4,5,2]    5 >2 = swap  [1,4,2,5] 

//  [1,4,2,5]  1>4 stay   
   //4>2 - swap [1,2,4,5]
   //pass 3 
// [1,5,4,2] compare 5 and 4, swap
// [1,4,5,2] compare 5 and 2, swap
// [1,4,2,5] compare 4 and 2, swap
// [1,2,4,5] compare 4 and 5, no swap