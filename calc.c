/* File: calc.c */
#include <stdio.h>
int main(){
long long a;
long long b;
printf("Please enter the first number:");
//fflush(stdout);
scanf("%lld",&a);
printf("Please enter the second number:");
//fflush(stdout);
scanf("%lld",&b);
printf("The sum of the two numbers is: %lld \n\n",(a+b));
return 0;
}


