/*
Name:Elvin Macharia
Reg no:CT101/G//26559/25
Description:C program to check eligibility of loan
*/

#include <stdio.h>

int main(){
    int age;
    float annual_income;
    
    //prompt customer to enter age
    printf("Enter your age\n");
    scanf("%d", &age);
    
    //prompt customer to enter annual_income
    printf("Enter your annual_income\n");
    scanf("%f", &annual_income);
    
    //check eligibility
    if (age>=21 && annual_income>=21000){
        printf("Congratulations you qualify for a loan\n");
    }
    else
    {
        printf("Unfortunately,we are unable to offer you a loan at this time\n");
    }
    return 0;
}
