   // Phython program 
/*
Name:Mary Kimilu 
Reg:CT100/G/26271/25
Description:Implement customer's annual income 
*/

#include<stdio.h>//standard input 

int main () {
    //variable declaration for age and income 
    int age;
    float income;
    
    //prompt user for age
    printf("Enter your age:");
    scanf("%d", &age);
    
    //prompt user  for annual income 
    printf("Enter your annual income:");
    scanf("annual income is sh %f", &income);
    
    //conditions 
    //Customer must be 21 years or older and income must be at least 21000
    
    if(age >=21 &income >=21000) {
    printf("Congratulations!You qualify for a loan.\n");
    } else {
    printf("Unfortunately we are unable to offer you a loan at this time. \n");
    }
    
    return 0; }
    