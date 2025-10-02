   // C program 
/*
Name:Mary Kimilu 
Reg:CT100/G/26271/25
Description:Water Bill Calculator 
*/

#include<stdio.h>//standard input 

int main () {
    //variable declaration for Water Bill Calculator 
    int units;
    float bills;
    
    //prompt user for Water units 
    printf("Enter water units consumed:"); 
    scanf("%d", &units);
    
    //Calculate bills 
    if(units <=30) {
       bills = units * 20.0;
    } else if(units <=60) {
       bills = (30 * 20.0) + (units - 30) * 25.0; 
       } 
       else {
             bills = (30 * 20.0) + (30 * 25.0) + ( units - 60)* 30;
    }         
    
    //Display total bills with two decimal 
    printf("Total Water bills : %.2f KES\n", bills);
       
    return 0; }
  
    
    