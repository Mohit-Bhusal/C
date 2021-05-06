#include <stdio.h>
int main(){
    int a = 0, b = 1, c, n, i;
    printf("Enter How many fabonachhi numbers you want"); scanf("%d",&n);
    printf("%d %d ",a,b);
    for(i=1 ; i<n+1 ; i++){
        c = a+b;
        printf("%d ",c);
        a = b;
        b = c;
    }       
}