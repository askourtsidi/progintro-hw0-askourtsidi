#include <stdio.h>

int main(){

 long long int leftcost,rightcost;


   while ( ){
     
    printf("Please enter the cost of going left:");
    if (scanf("%lld", &leftcost) == EOF) break;

    printf("Please enter the cost of going right:");
    if (scanf("%lld", leftcost) == EOF) break;
    
     if (leftcost<=rightcost){
       printf("Go left.\n");
       
       return 0;
     }
     else  {
       printf("Go right.\n");
       
       return 0;
     }
    
    if (rightcost != 1){
      
      return 1;
    }
  

   }
 
 return 0; 