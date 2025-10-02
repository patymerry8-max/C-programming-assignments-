   // C program 
/*
Name:Mary Kimilu 
Reg:CT100/G/26271/25
Description:Exam Eligibility 
*/

#include<stdio.h>//standard input 

int main () {
    //variable declaration for attendance and average marks
    float attendance,average_marks ;
    
    //prompt user for attendance
    printf("Enter attendance:");
    scanf("%.2f",&attendance);
    
    //prompt user for average_marks
    printf("Enter average_marks:");
    scanf("%.2f",&average_marks);
    
    if(attendance >=75.0 &&average_marks >=40.0) {
        printf("Eligible for final exams\n.");
    } else {
        printf("Not Eligible \n.");
    }    
      
    return 0;  }
    
    