#include<stdio.h>
int main(){
int i,j;
int matrix[2][3] = {{4,6,7}, {5,8,9}};
// {4,6,7}   
// {5,8,9}


matrix[0][0] = 35;
 
for(i=0;i<2;i++) {
    
    for(j=0;j<3;j++) {
            printf("%d\t", matrix[i][j]);
    }
    printf("\n");

}
return 0;

}