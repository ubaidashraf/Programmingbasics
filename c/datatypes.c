/**
Basic data types: 
Integer 
float 
Double
char 
bool
void

Derived data types : 
array 
pointer 
function 

User defined data types :
structure
union
enumeration (enum)   
*/
// 3 bits 
// 000
// 001
// 010
// 011
// 100
// 101
// 110
// 111


// /// 
// Int x[10];
// Allocates memory for 3 integers  in contigious memory allocations 
// Lets assume  first starts at address 100
// So first integer will be from 100 - 104
// second from : 105-108
// third from : 109-112

// 100-139
// 100-104 , 105-109 ... so on
// int num[5]
// num = 100
// num[0]
// num[1]
// 100
// 100 + 4 



// However if we had done 
// Int x 
// int y
// int z 
// They each of them could be allocated memory randomly 
// If x was at 100-104
// y could be at 200-204

// char c[3];
// first characters lets assume starts from address 100
// it will be from 100-101
// second will be from 102-103
// thrid will from from 104-105


#include<stdio.h>
int main() { 
    char c, int i;int j;
    int numbers [10];
    printf("enter character");
    scanf("%c",&c);
    
    printf("character entered  is %c", c);

   
    scanf("%d", &numbers[0]);
    for(i=0;i<10;i++) {
         j = i+1;
         printf("Enter number at locaton %d: ", j);
         scanf("%d", &numbers[i]);
    }

    return 0;    
}





int x ; // 8 bits for x, range -128 to 127    
C compiler says int is given 1 byte   