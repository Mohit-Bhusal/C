#include <stdio.h>
int main(){
    int num;
    printf("Enter the todays number of day"); scanf("%d",&num);
    switch(num){
        case 1:
            printf("the day is Sunday ");
            break;  //dont forget to use break because it will stop exicution after the break
        case 2:
            printf("the day is Monday ");
            break;
        case 3:
            printf("the day is Tuesday ");
            break;
        case 4:
            printf("the day is Wednesday ");
            break;
        case 5:
            printf("the day is Thursday ");
            break;
        case 6:
            printf("the day is Friday ");
            break;
        case 7:
            printf("the day is Saturday ");
            break;
        default:
            printf("Invalid option");
            break;
    }

}