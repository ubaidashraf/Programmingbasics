#include <stdio.h>
int main () {
    int n, i, count ;
    count = 0 ;
    printf("Enter a number:");

    scanf("%d", &n);
    for (i = 2; i <=n-1 ;i++ ) {
        if (n % i ==0) {
            count = count +1 ;
        }
    }
    if (count == 0) {
        printf("prime");
    }
    if (count > 0 )
{
    printf("Not primw");
}
return 0;
}