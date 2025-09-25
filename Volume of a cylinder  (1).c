   // simple C program 
/*
Name:Mary Kimilu 
Reg:CT100/G/26271/25
Description:Program to compute volume of a cylinder 
*/

#include<stdio.h>

int main () {
    //variable declaration 
    float radius,height,volume,surfaceArea;
    
    //prompt the user to enter radius 
    printf("Enter radius of the cylinder: ");
    scanf("%f",&radius);
    
    //prompt the user to enter height 
    printf("Enter height of the cylinder: ");
    scanf("%f",&height);
    
    //calculate the volume using the formula V=3.14*r×r*h 
    volume=3.14*radius*radius*height ;
    
    //calculate the surface area using the formula S.A=(2*3.14*r^2)+(2*3.14*r*h)
    surfaceArea =(2*3.14*radius*radius)+(2*3.14*radius*height) ;
    
    //Display results 
    printf("volumeof the cylinder =%.2f\n",volume);
    printf("surface area of  the cylinder =%.2f\n",surfaceArea);
    
    return 0;}
    