//If condition
#include <stdio.h>
int main(){
    int age;
    printf("Enter your age: ");
    scanf("%d",&age);

if(age >= 18){
    printf("You can vote");
}    
else{
    printf("You cant vote");
}
    return 0;
}