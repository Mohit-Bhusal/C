#include <stdio.h>
int main(){
    char *symb="🥴";
    int a;
    int k;
    for(a=1;a<5;a++){
        for(k=1;k<=a;k++){
            printf("%s",&*symb);
        }
        printf("\n");
    }

    return 0;    
}