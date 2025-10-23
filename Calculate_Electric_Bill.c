   // C program 
/*
Name:Mary Kimilu 
Reg:CT100/G/26271/25
Description:Calculate Electric Bill
*/

#include<stdio.h>//

int main () 
   int units;
   float bills;
     
    if ('units <=100') {
       bills = "(100 × 10)";
    else if ('units <=200') {
       bills  ="('100 × 10') + ('200 - 100') × 15";
    }  else {
       bills =" ('100 × 10') + ('100 × 15') + ('units - 200') × 20";
    }
    
       return bills;
    }   
    
    int main () {
       int units;
       printf("Enter the number of units consumed: ");   
       scanf("%d", &units); 
       
       printf("Total bill = ksh. %.2f \n");  
    return 0;  }
    
    