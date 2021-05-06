//for loop
//syntax:     for(initialize; condition; increment/decrement){
//              statement;
//            }
//while loop 
//syntax :        while{
//                    statement;
//                }
//do while loop
//syntax:          do{
//                 statement;     
//                    }while(condition);

#include <stdio.h>
int main(){
    //for loop
    char name[] = "mohit";
    int k;
    for(k=1;k<=20;k++){
        printf("%s \n" ,name);
    }
// while loop
    int a;
    while (a<=100){
        printf("%d \n",a);
        a++;
    }
    return 0;  
}

