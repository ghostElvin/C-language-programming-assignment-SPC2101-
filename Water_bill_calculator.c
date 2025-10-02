/*Name:Elvin Macharia
Reg no:CT101/G/26559/25
Description:program to display water bill
*/
//preprocessor directive
#include <stdio.h>

//main function
int main() {
    int units;       
    float bill;

    printf("Enter number of units consumed: ");
    scanf("%d", &units);

    //calculate the bill
    if (units <= 30) {
        bill = units * 20.0;
    } else if (units <= 60) {
        bill = units * 25.0;
    } else {
        bill = units * 30.0;
    }

    //display the total bill in decimal
    printf("Total water bill is KES %.2f\n", bill);
    return 0;
}





