   // C program 
/*
Name:Mary Kimilu 
Reg:CT100/G/26271/25
Description:ATM Withdrawal 
*/

#include<stdio.h>//

int main () {
    
    float balance, withdraw;
    
    //Ask the user for initial balance 
    printf("Enter initial account balance:");  
    
    scanf("%f", &balance);
    
    //Withdraw loop
    while(balance  > 0) 
         printf("Enter amount to withdrawal");
         
         scanf("%f", &withdraw);
         
         balance = balance - withdraw;
         
         printf("Remaining balance: %.2f\n", balance);
         
         if(balance <= 0)  {
            printf("Balance is zero or negative. No more withdrawals allowed.\n");
            
         }   
         
    return 0;  }
    
    