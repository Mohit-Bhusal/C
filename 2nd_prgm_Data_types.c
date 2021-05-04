// Data Types in C 
// 1. int : 1, 2, 3 
// 2. float : 1.2 + 1 = 2.2
// 3. char: "A-Z" ,"a-z", "@#$%^&*"
// 4. Void : it doesnt return anything 
#include <stdio.h>
int main(){
float first;
int second; 
printf("enter first number: "); scanf("%f",&first);

printf("Enter second number: "); scanf("%d",&second);

float sum = first + second;  

printf("The sum is %f",sum);  //we use %f for float and *d for intiger
    return 0;
}
