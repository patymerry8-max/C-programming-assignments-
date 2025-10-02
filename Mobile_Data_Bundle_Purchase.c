   // C program 
/*
Name:Mary Kimilu 
Reg:CT100/G/26271/25
Description:Mobile Data Bundle Purchase 
*/

#include<stdio.h>//standard input 

int main () {
    //variable declaration for data bundle 
    int choice ;
    
    //Display menu 
    printf("Mobile Data Bundle Purchase\n");
    printf("Option\tBundle\tCost (KES) \n");
    printf("1\t100MB\t50\n");
    printf("2\t500MB\t200\n");
    printf("3\t1GB\t350\n");
    printf("4\t2GB\t600\n");
    
    //prompt user ask for choice 
    printf("Enter your choice (1-4) :\n");
    scanf("%d", &choice);
    
    //prompt user to switch statement to display selected bundle and cost
    switch(choice) {
          case 1 :
              printf("You selected 100MB @50 KES\n");
          case 2 :
              printf("You selected 500MB @200 KES\n");   
          case 3 : 
              printf("You selected 1GB @350 KES\n");
          case 4 :
              printf("You selected 2GB @600 KES\n");
              
              default:
              printf("invalid choice! please select between 1-4. \n");
    }          
    return 0; }
  
    
    