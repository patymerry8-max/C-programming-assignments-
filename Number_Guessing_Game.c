   // C program 
/*
Name:Mary Kimilu 
Reg:CT100/G/26271/25
Description:Number Guessing Game
*/

#include<stdio.h>//

int main () {
    int secret, guess;
    
    //random number generator 
    srand(time(0));    
    secret = random () % 20 +1; // Number between 1 and 20
    
          printf("Guess the number between 1 and 20:\n");
    
          do {
          
          printf("Enter your guess :");
          scanf("%d", &guess);
          
          if(guess > secret ) {
             printf("Too high!\n");
          }  else if (guess > secret) {
             printf("Too low!\n");
          }  else {
             printf("Congratulations! You guessed it!\n");
          }  
    
    } while  (guess != secret);
         
    return 0;  }
    
    