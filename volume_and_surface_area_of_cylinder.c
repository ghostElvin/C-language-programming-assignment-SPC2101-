/*
Name:Elvin Macharia
Reg no:CT101/G/26559/25
Description:C program to find the volume and surface area of a cylinder
volume = pi*r^2*h
surface area = 2*pi*r^2 + 2*pi*r*h
*/

#include <stdio.h>
#define pi 3.1428

int main(){
    //variable declaration
    float r,h,volume,surface_area;
    
    //prompt user to enter r
    printf("Enter the radius of the cylinder");
    scanf("%f", &r);
    
    //prompt user to enter h
    printf("Enter the height of the cylinder\n");
    scanf("%f", &h);
    
    //calculate volume and surface_area
    volume = pi*r*r*h;
    surface_area = (2*pi*r*r) + (2*pi*r*h);
    
    //output the result
     printf("Volume of the cylinder: %.2f\n", volume);
    printf("Surface area of the cylinder: %.2f\n", surface_area);
    
}
