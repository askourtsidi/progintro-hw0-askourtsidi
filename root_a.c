#include <stdio.h>
#include <math.h>

int main(){

int a,b,c;
float diakrinousa;

printf("Please enter the first integer number:");
scanf("%d",&a);
while (a==0){
 printf("It cannot be zero.Please enter a non-zero integer:");
 scanf("%d",&a);
}

printf("Please enter the second integer number:");
scanf("%d",&b);
printf("Please enter the third integer number:");
scanf("%d",&c);

diakrinousa=b*b-4*a*c;

if (diakrinousa>0){
 printf("The trinomial equation has two solutions, x1= %f, x2= %f\n",(-b+sqrt(diakrinousa))/(a*2), (-b-sqrt(diakrinousa))/(a*2));
}
else
 {
 if (diakrinousa==0){
  printf("The trinomial equation has one solution, x= %d\n",(-b/(2*a)));
  }
 else
  {
  printf("The trinomial equation has no solution\n");
  }
 }
return 0;
}
