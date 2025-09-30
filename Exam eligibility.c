//preprocessor directive
#include<stdio.h>

//main function
int main(){
    float attendance, averagemarks;

    printf("Enter attendance percentage:\n");
    scanf("%f", &attendance);

    printf("Enter averagemarks:\n");
    scanf("%f", &averagemarks);
    
    //check eligibility
    if(attendance>=75 && averagemarks>=40){
        printf("Eligible for final exam.\n");
    } else {
        printf("Not eligible for final exam.\n");
    }
    return 0;
}